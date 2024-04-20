#include "init-list.h"

init_list::CBoy::CBoy()
{
	m_name.clear();
	cout << "调用了CBoy构造函数" << endl;
}

init_list::CBoy::CBoy(string name)
{
	m_name = name;
	cout << "调用了CBoy(name)构造函数" << endl;
}

init_list::CBoy::CBoy(const CBoy& b)
{
	m_name = b.m_name;
	cout << "调用了CBoy(const CBoy& b)构造函数" << endl;
}

//init_list::CGirl::CGirl():m_name("西施"),m_age(23)  // 初始化列表
//init_list::CGirl::CGirl()
//{ 
//	//m_name = "貂蝉"; m_age = 18;  使用初始化列表后，不应该在构造函数中再次赋值
//	cout << "调用了CGirl构造函数" << endl; 
//}

//init_list::CGirl::CGirl(string name, int age, CBoy& boy)  // 初始化列表,使用表达式
//{
//	m_name = name; m_age = age; m_boy.m_name = boy.m_name;
//	cout << "调用了CGirl(name, age, boy)构造函数" << endl;
//}

//init_list::CGirl::CGirl(string name, int age) :m_name(name), m_age(age)  // 初始化列表,使用变量
//init_list::CGirl::CGirl(string name, int age, CBoy boy) : m_name("漂亮的"+name), m_age(age-2)  // 初始化列表,使用表达式
init_list::CGirl::CGirl(string name, int age, CBoy &boy) : m_name(name), m_age(age), m_boy(boy)  // 初始化列表,使用表达式
{
	//m_name = name; m_age = age;
	//m_boy.m_name = boy.m_name;
	cout << "调用了CGirl(name, age, boy)构造函数" << endl;
}

void init_list::CGirl::show()
{
	cout << "姓名：" << m_name << "，年龄：" << m_age << "，男朋友：" << m_boy.m_name << endl;
}

void init_list::printCGirl()
{
	//CGirl g1;
	CBoy boy("虚拟");
	CGirl g1("西施", 20, boy);
	
	g1.show();
}
