#include "const-function.h"

const_function::CGirl::CGirl(string name, int age)
//const_function::CGirl::CGirl(string name, int age) const // ���캯�������������ϲ�����ʹ�������޶���
{
	m_name = name;
	m_age = age;
	cout << "������CGirl(name, age)���캯��" << endl;
}

//// const���γ�Ա��������ʾ�����޸ĳ�Ա���� 
//// ������ĳ�Ա�������ڳ�Ա�����б��޸ģ���Ϊ�˱�֤ģ�͵��߼���ȷ��ͨ����const�ؼ����������ں����д�����޸���������״̬
//void const_function::CGirl::show() const
//{
//	cout << "������" << m_name << "�����䣺" << m_age << endl;
//}

// ��Ա��������mutavle���Σ��Ϳ����޸�
void const_function::CGirl::show() const
{
	m_name = "�����";
	cout << "������" << m_name << "�����䣺" << m_age << endl;
}

void const_function::CGirl::show1() const
{
	m_name = "�����show1";
	cout << "������" << m_name << "�����䣺" << m_age << endl;
	//show3();
}

void const_function::CGirl::show2() const
{
	m_name = "�����show2";
	cout << "������" << m_name << "�����䣺" << m_age << endl;
}

void const_function::CGirl::show3()
{
	m_name = "�����show3";
	cout << "������" << m_name << "�����䣺" << m_age << endl;
	show4();
	show1();
}

void const_function::CGirl::show4()
{
	m_name = "�����show4";
	cout << "������" << m_name << "�����䣺" << m_age << endl;
}

void const_function::printCGirl()
{
	//CGirl g1("��ʩ", 20);
	const CGirl g1("��ʩ", 20); // ������ֻ�ܵ���const���εĳ�Ա����

	g1.show();
	g1.show1();
	g1.show2();
	//g1.show3();
	//g1.show4();
}
