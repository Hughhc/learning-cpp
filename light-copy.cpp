#include "light-copy.h"

// ���캯��
light_cope::CGirl::CGirl() { m_name.clear(); m_age = 0; m_ptr = nullptr; cout << "������CGirl���캯��" << endl; }

// ǳ����
//Cgirl::Cgirl(const Cgirl& g) 
//{ 
//	m_name = g.m_name;
//	m_age = g.m_age;
//	m_ptr = g.m_ptr;
//	cout << "������Cgirl(const Cgirl& g)�������캯��" << endl; 
//}

// ���
light_cope::CGirl::CGirl(const CGirl& g)
{
	m_name = g.m_name;
	m_age = g.m_age;
	m_ptr = new int; // �����ڴ�
	// ��������
	//*m_ptr = *g.m_ptr; // ������ֱ�Ӹ�ֵ
	memcpy(m_ptr, g.m_ptr, sizeof(int)); // ����������memcpy
	cout << "������Cgirl(const Cgirl& g)�������캯��" << endl;
}

// ��������
light_cope::CGirl::~CGirl() { delete m_ptr; m_ptr = nullptr; cout << "������~Cgirl()\n"; }

// ��ʾ��Ա����
void light_cope::CGirl::show() { cout << "������" << m_name << "�����䣺" << m_age << "��m_ptr��" << m_ptr << "��*m_ptr��" << *m_ptr << endl; }

void light_cope::printCGirl()
{
	CGirl g1;
	g1.m_name = "��ʩ"; g1.m_age = 23; g1.m_ptr = new int(3);
	g1.show();

	CGirl g2(g1); *g2.m_ptr = 8;
	g1.show();
	g2.show();
}
