#include "const-function.h"

const_function::CGirl::CGirl(string name, int age)
//const_function::CGirl::CGirl(string name, int age) const // 构造函数或析构函数上不允许使用类型限定符
{
	m_name = name;
	m_age = age;
	cout << "调用了CGirl(name, age)构造函数" << endl;
}

//// const修饰成员函数，表示不会修改成员变量 
//// 保护类的成员变量不在成员函数中被修改，是为了保证模型的逻辑正确，通过用const关键字来避免在函数中错误的修改了类对象的状态
//void const_function::CGirl::show() const
//{
//	cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
//}

// 成员变量加上mutavle修饰，就可以修改
void const_function::CGirl::show() const
{
	m_name = "刘亦菲";
	cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
}

void const_function::CGirl::show1() const
{
	m_name = "刘亦菲show1";
	cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
	//show3();
}

void const_function::CGirl::show2() const
{
	m_name = "刘亦菲show2";
	cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
}

void const_function::CGirl::show3()
{
	m_name = "刘亦菲show3";
	cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
	show4();
	show1();
}

void const_function::CGirl::show4()
{
	m_name = "刘亦菲show4";
	cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
}

void const_function::printCGirl()
{
	//CGirl g1("西施", 20);
	const CGirl g1("西施", 20); // 常对象，只能调用const修饰的成员函数

	g1.show();
	g1.show1();
	g1.show2();
	//g1.show3();
	//g1.show4();
}
