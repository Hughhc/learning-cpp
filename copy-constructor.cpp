#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "copy-constructor.h"

// 用一个已存在的对象创建新的对象，不会调用（普通）构造函数，而是调用拷贝构造函数
// 如果类中没有定义拷贝构造函数，编译器将提供一个拷贝构造函数，它的功能是把已存在对象的成员变量赋值给新对象的成员变量
class Cgirl
{
public:
	string m_name;      // 姓名
	int    m_age;       // 年龄

	// 没有参数的普通构造函数
	Cgirl(){ m_name.clear(); m_age = 0; cout << "调用了Cgirl构造函数" << endl; }

	// 没有重载的拷贝构造函数（默认拷贝函数）
	//Cgirl(const Cgirl& g) { m_name = "漂亮的" + g.m_name; m_age = g.m_age - 1; cout << "调用了Cgirl(const Cgirl& g)拷贝构造函数" << endl; }
	
	// 如果类中重载了拷贝构造函数却没有定义默认的拷贝构造函数，编译器也会提供默认的拷贝构造函数
	// 重载的拷贝构造函数（默认拷贝函数）
	Cgirl(const Cgirl& g, int i) { m_name = "漂亮的" + g.m_name; m_age = g.m_age - i; cout << "调用了Cgirl(const Cgirl& g,int i)拷贝构造函数" << endl; }

	// 析构函数
	~Cgirl() { cout << "调用了~Cgirl()\n"; }

	// 显示成员变量
	void show(){ cout << "姓名：" << m_name << "，年龄：" << m_age << endl; }
};

//// 以值传递的方式调用函数时，如果实参为对象，会调用拷贝构造函数
//void  func(Cgirl g)
//{
//	g.show();
//}

//// 函数以值的方式返回对象时，可能会调用拷贝构造函数（VS会调用，Linux不会，g++编译器做了优化)
//Cgirl func()
//{
//	Cgirl g;
//	g.m_name = "西施";
//	g.m_age = 18;
//	cout << "对象gg的址址："<<&g<<endl;
//	return g;
//}

void printCGirl()
{
	//Cgirl g1;
	////Cgirl g2 = Cgirl();
	////Cgirl* g3 = new Cgirl;
	////Cgirl* g4 = new Cgirl();

	////delete g3;
	////delete g4;
	//g1.m_name = "西施"; 
	//g1.m_age = 18;
	////用一个已存在的对象创建新的对象语法：
	//// 类名新对象名（已存在的对象名）
	//// 类名新对象名=已存在的对象名
	////Cgirl g2(g1);
	////Cgirl g2 = g1;
	////g2.show();

	//func(g1);
	//Cgirl g = func();
	//g.show();
	//cout << "对象gg的址址：" << &g << endl;
	
	Cgirl g1;
	g1.m_name = "西施";
	g1.m_age = 18;
	//Cgirl g2(g1, 2);
	Cgirl g2(g1);
	g2.show();
}
