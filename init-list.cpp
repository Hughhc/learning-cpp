#include "init-list.h"

init_list::CBoy::CBoy()
{
	m_name.clear();
	cout << "������CBoy���캯��" << endl;
}

init_list::CBoy::CBoy(string name)
{
	m_name = name;
	cout << "������CBoy(name)���캯��" << endl;
}

init_list::CBoy::CBoy(const CBoy& b)
{
	m_name = b.m_name;
	cout << "������CBoy(const CBoy& b)���캯��" << endl;
}

//init_list::CGirl::CGirl():m_name("��ʩ"),m_age(23)  // ��ʼ���б�
//init_list::CGirl::CGirl()
//{ 
//	//m_name = "����"; m_age = 18;  ʹ�ó�ʼ���б�󣬲�Ӧ���ڹ��캯�����ٴθ�ֵ
//	cout << "������CGirl���캯��" << endl; 
//}

//init_list::CGirl::CGirl(string name, int age, CBoy& boy)  // ��ʼ���б�,ʹ�ñ��ʽ
//{
//	m_name = name; m_age = age; m_boy.m_name = boy.m_name;
//	cout << "������CGirl(name, age, boy)���캯��" << endl;
//}

//init_list::CGirl::CGirl(string name, int age) :m_name(name), m_age(age)  // ��ʼ���б�,ʹ�ñ���
//init_list::CGirl::CGirl(string name, int age, CBoy boy) : m_name("Ư����"+name), m_age(age-2)  // ��ʼ���б�,ʹ�ñ��ʽ
init_list::CGirl::CGirl(string name, int age, CBoy &boy) : m_name(name), m_age(age), m_boy(boy)  // ��ʼ���б�,ʹ�ñ��ʽ
{
	//m_name = name; m_age = age;
	//m_boy.m_name = boy.m_name;
	cout << "������CGirl(name, age, boy)���캯��" << endl;
}

void init_list::CGirl::show()
{
	cout << "������" << m_name << "�����䣺" << m_age << "�������ѣ�" << m_boy.m_name << endl;
}

void init_list::printCGirl()
{
	//CGirl g1;
	CBoy boy("����");
	CGirl g1("��ʩ", 20, boy);
	
	g1.show();
}
