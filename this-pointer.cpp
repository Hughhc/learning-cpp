#include "this-pointer.h"

this_pointer::CGirl::CGirl(string name, int yz)
{
	m_name = name;
	m_yz = yz;
}

void this_pointer::CGirl::show() const
{
	cout << "����" << m_name << "����Ư���ġ�" << endl;
}

// C++���
const this_pointer::CGirl& this_pointer::CGirl::pk(const CGirl& g) const
{
	if (g.m_yz < m_yz) return g;
	// �����Լ� 
	return *this; //�����ÿ����Ա�����У���һ�����ص�ָ�룬��this
}

// ÿ����Ա�������������캯������������������һ��thisָ�룬�����������ʵ����߶���ĳ�Ա�����Խ����Ա�������뺯���β�����ͬ�����⣩
void this_pointer::CGirl::func(int a)
{
	//a = a;     // ����a����ָ�β�a
	this->a = a; // ���Ϊ��Ա�������ұ�Ϊ�β�
}

////C���
//const this_pointer::CGirl& this_pointer::pk(const this_pointer::CGirl& g1, const this_pointer::CGirl& g2)
//{
//	if (g1.m_yz < g2.m_yz) return g1;
//	return g2;
//}

void this_pointer::print()
{
	//// pk 2��
	//CGirl g1("��ʩ", 1), g2("��ʩ", 2);
	////const CGirl& g3 = pk(g1, g2);
	////const CGirl& g3 = g1.pk(g2);
	//const CGirl& g3 = g2.pk(g1);

	// pk 5��
	CGirl g1("��ʩ", 1), g2("��ʩ", 3), g3("��ʩ", 5), g4("��ʩ", 2), g5("��ʩ", 4);
	const CGirl& g = g1.pk(g2).pk(g3).pk(g4).pk(g5);
	g.show();
}
