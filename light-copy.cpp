#include "light-copy.h"

// 构造函数
light_cope::CGirl::CGirl() { m_name.clear(); m_age = 0; m_ptr = nullptr; cout << "调用了CGirl构造函数" << endl; }

// 浅拷贝
//Cgirl::Cgirl(const Cgirl& g) 
//{ 
//	m_name = g.m_name;
//	m_age = g.m_age;
//	m_ptr = g.m_ptr;
//	cout << "调用了Cgirl(const Cgirl& g)拷贝构造函数" << endl; 
//}

// 深拷贝
light_cope::CGirl::CGirl(const CGirl& g)
{
	m_name = g.m_name;
	m_age = g.m_age;
	m_ptr = new int; // 分配内存
	// 拷贝数据
	//*m_ptr = *g.m_ptr; // 简单数据直接赋值
	memcpy(m_ptr, g.m_ptr, sizeof(int)); // 复杂数据用memcpy
	cout << "调用了Cgirl(const Cgirl& g)拷贝构造函数" << endl;
}

// 析构函数
light_cope::CGirl::~CGirl() { delete m_ptr; m_ptr = nullptr; cout << "调用了~Cgirl()\n"; }

// 显示成员变量
void light_cope::CGirl::show() { cout << "姓名：" << m_name << "，年龄：" << m_age << "，m_ptr：" << m_ptr << "，*m_ptr：" << *m_ptr << endl; }

void light_cope::printCGirl()
{
	CGirl g1;
	g1.m_name = "西施"; g1.m_age = 23; g1.m_ptr = new int(3);
	g1.show();

	CGirl g2(g1); *g2.m_ptr = 8;
	g1.show();
	g2.show();
}
