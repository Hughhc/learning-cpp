#include "class-polymorphism.h"

void class_polymorphism::CAllComers::show()
{ 
	cout << "CAllComers::show()������" << m_bh << "�š� " << endl; 
}

void class_polymorphism::CAllComers::show(int a)
{ 
	cout << "CAllComers::show(int a)������" << m_bh << "�š� " << endl; 
}

void class_polymorphism::CGirl::show()
{ 
	cout << "CGirl::show()������" << m_bh << "�ţ� " << m_age << "�ꡣ" << endl; 
}

void class_polymorphism::CGirl::show(int a)
{ 
	cout << "CGirl::show(int a)������" << m_bh << "�ţ� " << m_age << "�ꡣ" << endl; 
}

void class_polymorphism::print()
{
    CAllComers a;  a.m_bh = 3;                             // ����������󲢶Գ�Ա��ֵ��
    CGirl g;             g.m_bh = 8; g.m_age = 23;    // ������������󲢶Գ�Ա��ֵ��
    //g.show();

    CAllComers* p;            // ��������ָ�롣
    //p = &a;   p->show();   // �û���ָ��ָ�������󣬲������麯����
    p = &g;   p->show();   // �û���ָ��ָ����������󣬲������麯����
    p->show(5);
    p->CAllComers::show(5);

}
