#include "class-inherits.h"

class_inherits::CAllComers::CAllComers()
{
	m_name = "某女"; m_tel = "不详";
}

void class_inherits::CAllComers::sing()
{
	cout << "我是一只小小鸟。\n";
}

void class_inherits::CAllComers::setname(const string& name)
{ 
	m_name = name; 
}

void class_inherits::CAllComers::settel(const string& tel)
{ 
	m_tel = tel; 
}

class_inherits::CGirl::CGirl()
{ 
	m_bh = 8; 
}

void class_inherits::CGirl::show()
{ 
	setname("西施"); // 私有成员只能在类中访问
	cout << "编号：" << m_bh << "，姓名：" << m_name << "，联系电话：" << m_tel << endl; 
}

void class_inherits::print()
{
	CGirl g;
	//g.setname("西施");
	g.show();
}
