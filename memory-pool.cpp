#include "memory-pool.h"

bool memory_pool::CGirl::initpool()             // 个初始化内存池的函数。
{
	m_pool = (char*)malloc(18);           // 向系统申请18字节的内存。
	if (m_pool == 0)  return false;        // 如果申请内存失败，返回false。
	memset(m_pool, 0, 18);                  // 把内存池中的内容初始化为0。
	cout << "内存池的起始地址是：" << (void*)m_pool << endl;
	return true;
}

void memory_pool::CGirl::freepool()                                     // 释放内存池。
{
	if (m_pool == 0) return;                  // 如果内存池为空，不需要释放，直接返回。
	free(m_pool);                                        // 把内存池归还给系统。
	cout << "内存池已释放。\n";
}

memory_pool::CGirl::CGirl(int bh, int xw)
{ 
	m_bh = bh, m_xw = xw;  
	cout << "调用了构造函数CGirl()\n"; 
}

memory_pool::CGirl::~CGirl()
{ 
	cout << "调用了析构函数~CGirl()\n"; 
}

void* memory_pool::CGirl::operator new(size_t size)   // 参数必须是size_t（unsigned long long），返回值必须是void*。
{
	if (m_pool[0] == 0)      // 判断第一个位置是否空闲。
	{
		cout << "分配了第一块内存：" << (void*)(m_pool + 1) << endl;
		m_pool[0] = 1;         // 把第一个位置标记为已分配。
		return m_pool + 1;  // 返回第一个用于存放对象的址。
	}
	if (m_pool[9] == 0)          // 判断第二个位置是否空闲。
	{
		cout << "分配了第二块内存：" << (void*)(m_pool + 9) << endl;
		m_pool[9] = 1;             // 把第二个位置标记为已分配。
		return m_pool + 9;      // 返回第二个用于存放对象的址。
	}

	// 如果以上两个位置都不可用，那就直接系统申请内存。
	void* ptr = malloc(size);        // 申请内存。
	cout << "申请到的内存的地址是：" << ptr << endl;
	return ptr;
}

void memory_pool::CGirl::operator delete(void* ptr)   // 参数必须是void *，返回值必须是void。
{
	if (ptr == 0) return;      // 如果传进来的地址为空，直接返回。

	if (ptr == m_pool + 1)      // 如果传进来的地址是内存池的第一个位置。
	{
		cout << "释放了第一块内存。\n";
		m_pool[0] = 0;              // 把第一个位置标记为空闲。
		return;
	}

	if (ptr == m_pool + 9)      // 如果传进来的地址是内存池的第二个位置。
	{
		cout << "释放了第二块内存。\n";
		m_pool[9] = 0;              // 把第二个位置标记为空闲。
		return;
	}

	// 如果传进来的地址不属于内存池，把它归还给系统。
	free(ptr);      // 释放内存。
}

char* memory_pool::CGirl::m_pool = 0;       // 初始化内存池的指针

int memory_pool::printCGirl()
{
	// 初始化内存池。
	if (CGirl::initpool() == false)
	{ 
		cout << "初始化内存池失败。\n"; 
		return -1;
	}

	CGirl* p1 = new CGirl(3, 8);       // 将使用内存池的第一个位置。
	cout << "p1的地址是：" << p1 << "，编号：" << p1->m_bh << "，胸围：" << p1->m_xw << endl;

	CGirl* p2 = new CGirl(4, 7);       // 将使用内存池的第二个位置。
	cout << "p2的地址是：" << p2 << "，编号：" << p2->m_bh << "，胸围：" << p2->m_xw << endl;

	CGirl* p3 = new CGirl(6, 9);       // 将使用系统的内存。
	cout << "p3的地址是：" << p3 << "，编号：" << p3->m_bh << "，胸围：" << p3->m_xw << endl;

	delete p1;    // 将释放内存池的第一个位置。

	CGirl* p4 = new CGirl(5, 3);        // 将使用内存池的第一个位置。
	cout << "p4的地址是：" << p4 << "，编号：" << p4->m_bh << "，胸围：" << p4->m_xw << endl;

	delete p2;    // 将释放内存池的第二个位置。
	delete p3;    // 将释放系统的内存。
	delete p4;    // 将释放内存池的第一个位置。

	CGirl::freepool();     // 释放内存池。

	return 0;
}
