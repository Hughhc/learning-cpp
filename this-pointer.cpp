#include "this-pointer.h"

this_pointer::CGirl::CGirl(string name, int yz)
{
	m_name = name;
	m_yz = yz;
}

void this_pointer::CGirl::show() const
{
	cout << "我是" << m_name << "，最漂亮的。" << endl;
}

// C++风格
const this_pointer::CGirl& this_pointer::CGirl::pk(const CGirl& g) const
{
	if (g.m_yz < m_yz) return g;
	// 返回自己 
	return *this; //在类的每个成员函数中，有一个隐藏的指针，叫this
}

// 每个成员函数（包括构造函数和析构函数）都有一个this指针，可以用它访问调用者对象的成员（可以解决成员变量名与函数形参名相同的问题）
void this_pointer::CGirl::func(int a)
{
	//a = a;     // 两个a都是指形参a
	this->a = a; // 左边为成员变量，右边为形参
}

////C风格
//const this_pointer::CGirl& this_pointer::pk(const this_pointer::CGirl& g1, const this_pointer::CGirl& g2)
//{
//	if (g1.m_yz < g2.m_yz) return g1;
//	return g2;
//}

void this_pointer::print()
{
	//// pk 2个
	//CGirl g1("西施", 1), g2("东施", 2);
	////const CGirl& g3 = pk(g1, g2);
	////const CGirl& g3 = g1.pk(g2);
	//const CGirl& g3 = g2.pk(g1);

	// pk 5个
	CGirl g1("西施", 1), g2("东施", 3), g3("南施", 5), g4("北施", 2), g5("中施", 4);
	const CGirl& g = g1.pk(g2).pk(g3).pk(g4).pk(g5);
	g.show();
}
