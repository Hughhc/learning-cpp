#include "class-inherits.h"

class_inherits::CAllComers::CAllComers()
{
	m_name = "ĳŮ"; m_tel = "����";
}

void class_inherits::CAllComers::sing()
{
	cout << "����һֻСС��\n";
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
	setname("��ʩ"); // ˽�г�Աֻ�������з���
	cout << "��ţ�" << m_bh << "��������" << m_name << "����ϵ�绰��" << m_tel << endl; 
}

void class_inherits::print()
{
	CGirl g;
	//g.setname("��ʩ");
	g.show();
}
