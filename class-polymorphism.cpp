#include "class-polymorphism.h"

void class_polymorphism::CAllComers::show()
{ 
	cout << "CAllComers::show()：我是" << m_bh << "号。 " << endl; 
}

void class_polymorphism::CAllComers::show(int a)
{ 
	cout << "CAllComers::show(int a)：我是" << m_bh << "号。 " << endl; 
}

void class_polymorphism::CGirl::show()
{ 
	cout << "CGirl::show()：我是" << m_bh << "号， " << m_age << "岁。" << endl; 
}

void class_polymorphism::CGirl::show(int a)
{ 
	cout << "CGirl::show(int a)：我是" << m_bh << "号， " << m_age << "岁。" << endl; 
}

void class_polymorphism::print()
{
    CAllComers a;  a.m_bh = 3;                             // 创建基类对象并对成员赋值。
    CGirl g;             g.m_bh = 8; g.m_age = 23;    // 创建派生类对象并对成员赋值。
    //g.show();

    CAllComers* p;            // 声明基类指针。
    //p = &a;   p->show();   // 让基类指针指向基类对象，并调用虚函数。
    p = &g;   p->show();   // 让基类指针指向派生类对象，并调用虚函数。
    p->show(5);
    p->CAllComers::show(5);

}
