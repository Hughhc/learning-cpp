#include "operator-overloading.h"

//operator_overloading::CGirl::CGirl()
//{
//	m_name = "西施";
//	m_xw = 87;
//	m_score = 30;
//}

//// 下标运算符重载 构造函数
//operator_overloading::CGirl::CGirl()
//{
//	m_boys[0] = "子都";
//	m_boys[1] = "潘安";
//	m_boys[2] = "宋玉"; 
//}

//void operator_overloading::CGirl::show()
//{
//	cout << "姓名：" << m_name << "，胸围：" << m_xw << "，评分：" << m_score << endl;
//}

//// 下标运算符重载
//void operator_overloading::CGirl::show()
//{ 
//	cout << m_boys[0] << "、" << m_boys[1] << "、" << m_boys[2] << endl;
//}

//// 给超女加分的函数 同一个运算符的重载函数，只能在成员和非成员函数版本中二选一
////void operator_overloading::addscore(operator_overloading::CGirl& g, int score)
//operator_overloading::CGirl& operator_overloading::operator+(int score, operator_overloading::CGirl& g)
//{
//	g.m_score = g.m_score + score;
//	return g;
//}
//
//operator_overloading::CGirl& operator_overloading::operator+(operator_overloading::CGirl& g1, operator_overloading::CGirl& g2)
//{
//	g1.m_score = g1.m_score + g2.m_score;
//	return g1;
//}
//
//operator_overloading::CGirl& operator_overloading::operator+(operator_overloading::CGirl& g, int score)
//{
//	g.m_score = g.m_score + score;
//	return g;
//}

//// 给超女加分的函数
//operator_overloading::CGirl& operator_overloading::CGirl::operator+(int score)
//{
//	m_score = m_score + score;
//	return *this;
//}

//// 给超女减分的函数
//operator_overloading::CGirl& operator_overloading::operator-(operator_overloading::CGirl& g, int score)
//{
//	g.m_score = g.m_score - score;
//	return g;
//}

//// 左移运算符重载
//ostream& operator_overloading::operator<<(ostream& cout, const operator_overloading::CGirl& g)
//{
//	cout << "姓名：" << g.m_name << "，胸围：" << g.m_xw << "，评分：" << g.m_score;
//	return cout;
//}

//// 下标运算符重载
//string& operator_overloading::CGirl::operator[](int ii)
//{
//	return m_boys[ii];
//}
//
//const string& operator_overloading::CGirl::operator[](int ii) const
//{
//	return m_boys[ii];
//}

//// 重载赋值运算符
////编译器提供的默认赋值函数，是浅拷贝。
////如果对象中不存在堆区内存空间，默认赋值函数可以满足需求，否则需要深拷贝。
////赋值运算和拷贝构造不同：拷贝构造是指原来的对象不存在，用已存在的对象进行构造；赋值运算是指已经存在了两个对象，把其中一个对象的成员变量的值赋给另一个对象的成员变量
//operator_overloading::CGirl::CGirl()
//{ 
//	m_ptr = nullptr; 
//}
//
//operator_overloading::CGirl::~CGirl()
//{ 
//	if (m_ptr)  delete m_ptr; 
//}
//
//void operator_overloading::CGirl::show()
//{ 
//	cout << "编号：" << m_bh << "，姓名：" << m_name << "，m_ptr=" << m_ptr <</* "，*m_ptr=" << *m_ptr<< */endl; 
//}
//
//operator_overloading::CGirl& operator_overloading::CGirl::operator=(const CGirl& g)
//{
//	if (this == &g) return *this;          // 如果是自己给自己赋值。
//
//	if (g.m_ptr == nullptr)    // 如果源对象的指针为空，则清空目标对象的内存和指针。
//	{
//		if (m_ptr != nullptr) { delete m_ptr; m_ptr = nullptr; }
//	}
//	else    // 如果源对象的指针不为空。
//	{
//		// 如果目标对象的指针为空，先分配内存。
//		if (m_ptr == nullptr) m_ptr = new int;
//		// 然后，把源对象内存中的数据复制到目标对象的内存中。
//		memcpy(m_ptr, g.m_ptr, sizeof(int));
//	}
//
//	m_bh = g.m_bh; m_name = g.m_name;
//	cout << "调用了重载赋值函数。\n" << endl;
//	return *this;
//}

// 重载new&delete运算符
//// 全局变量重载
//void* operator new(size_t size)   // 参数必须是size_t（unsigned long long），返回值必须是void*
//{
//	cout << "调用了全局重载的new：" << size << "字节。\n";
//	void* ptr = malloc(size);        // 申请内存。
//	cout << "申请到的内存的地址是：" << ptr << endl;
//	return ptr;
//}
//
//void operator delete(void* ptr)   // 参数必须是void *，返回值必须是void
//{
//	cout << "调用了全局重载的delete。\n";
//	if (ptr == 0) return;       // 对空指针delete是安全的。
//	free(ptr);      // 释放内存。
//}

operator_overloading::CGirl::CGirl(int bh, int xw)
{ 
	m_bh = bh, m_xw = xw;
	cout << "调用了构造函数CGirl()\n"; 
}

operator_overloading::CGirl::~CGirl()
{ 
	cout << "调用了析构函数~CGirl()\n"; 
}

void* operator_overloading::CGirl::operator new(size_t size)   // 参数必须是size_t（unsigned long long），返回值必须是void*。
{
	cout << "调用了类的重载的new：" << size << "字节。\n";
	void* ptr = malloc(size);        // 申请内存。
	cout << "申请到的内存的地址是：" << ptr << endl;
	return ptr;
}

void operator_overloading::CGirl::operator delete(void* ptr)   // 参数必须是void *，返回值必须是void。
{
	cout << "调用了类的重载的delete。\n";
	if (ptr == 0) return;       // 对空指针delete是安全的。
	free(ptr);      // 释放内存。
}

void operator_overloading::printCGirl()
{
	//// 导演的要求：每轮表演之后，给超女加上她的得分
	//CGirl g;

	//// 给超女加分的函数。
	//g = g + 30;
	////addscore(g, 30);
	////operator+(g, 30);
	////g + 30;
	//g.show();

	//g = 10 + g;
	//g.show();

	//g = g + g;
	//g.show();

	//g = g - 20 - 10; // 重载函数参数列表中的顺序决定了操作数的位置
	////g = 20 - 10 - g;
	//g.show();

	//// 左移运算符重载
	//cout << g << endl;

	//// 下标运算符重载 下标运算符必须以成员函数的形式进行重载
	//CGirl g;
	//g[1] = "王麻子";
	//cout << "第1任男朋友：" << g[1] << endl;
	//g.show();

	//const CGirl g1 = g;
	//cout << "第1任男朋友：" << g1[1] << endl;

	//// 重载赋值运算符
	//CGirl g1, g2;
	//g1.m_bh = 8; g1.m_name = "西施"; g1.m_ptr = new int(3);
	//g1.show();
	//g2.show();

	//g2 = g1;
	//g2.show();
	//cout << "*g1.m_ptr=" << *g1.m_ptr << "，*g2.m_ptr=" << *g2.m_ptr << endl;

	// 重载new&delete运算符
	//int* p1 = new int(3);
	//cout << "p1=" << (void*)p1 << "，*p1=" << *p1 << endl;
	//delete p1;

	CGirl* p2 = new CGirl(3, 8);
	cout << "p2的地址是：" << p2 << "编号：" << p2->m_bh << "，胸围：" << p2->m_xw << endl;
	delete p2;
}
