#include "operator-overloading.h"

//operator_overloading::CGirl::CGirl()
//{
//	m_name = "��ʩ";
//	m_xw = 87;
//	m_score = 30;
//}

// �±���������� ���캯��
operator_overloading::CGirl::CGirl()
{
	m_boys[0] = "�Ӷ�";
	m_boys[1] = "�˰�";
	m_boys[2] = "����"; 
}

//void operator_overloading::CGirl::show()
//{
//	cout << "������" << m_name << "����Χ��" << m_xw << "�����֣�" << m_score << endl;
//}

// �±����������
void operator_overloading::CGirl::show()
{ 
	cout << m_boys[0] << "��" << m_boys[1] << "��" << m_boys[2] << endl;
}

//// ����Ů�ӷֵĺ��� ͬһ������������غ�����ֻ���ڳ�Ա�ͷǳ�Ա�����汾�ж�ѡһ
////void operator_overloading::addscore(operator_overloading::CGirl& g, int score)
//operator_overloading::CGirl& operator_overloading::operator+(int score, operator_overloading::CGirl& g)
//{
//	g.m_score = g.m_score + score;
//	return g;
//}
//
//operator_overloading::CGirl& operator_overloading::operator+(operator_overloading::CGirl& g1, operator_overloading::CGirl& g2)
//{
//	g1.m_score = g1.m_score + g2.m_score;
//	return g1;
//}
//
//operator_overloading::CGirl& operator_overloading::operator+(operator_overloading::CGirl& g, int score)
//{
//	g.m_score = g.m_score + score;
//	return g;
//}

//// ����Ů�ӷֵĺ���
//operator_overloading::CGirl& operator_overloading::CGirl::operator+(int score)
//{
//	m_score = m_score + score;
//	return *this;
//}

//// ����Ů���ֵĺ���
//operator_overloading::CGirl& operator_overloading::operator-(operator_overloading::CGirl& g, int score)
//{
//	g.m_score = g.m_score - score;
//	return g;
//}

//// �������������
//ostream& operator_overloading::operator<<(ostream& cout, const operator_overloading::CGirl& g)
//{
//	cout << "������" << g.m_name << "����Χ��" << g.m_xw << "�����֣�" << g.m_score;
//	return cout;
//}

// �±����������
string& operator_overloading::CGirl::operator[](int ii)
{
	return m_boys[ii];
}

const string& operator_overloading::CGirl::operator[](int ii) const
{
	return m_boys[ii];
}


void operator_overloading::printCGirl()
{
	//// ���ݵ�Ҫ��ÿ�ֱ���֮�󣬸���Ů�������ĵ÷�
	//CGirl g;

	//// ����Ů�ӷֵĺ�����
	//g = g + 30;
	////addscore(g, 30);
	////operator+(g, 30);
	////g + 30;
	//g.show();

	//g = 10 + g;
	//g.show();

	//g = g + g;
	//g.show();

	//g = g - 20 - 10; // ���غ��������б��е�˳������˲�������λ��
	////g = 20 - 10 - g;
	//g.show();

	//// �������������
	//cout << g << endl;

	// �±���������� �±�����������Գ�Ա��������ʽ��������
	CGirl g;
	g[1] = "������";
	cout << "��1�������ѣ�" << g[1] << endl;
	g.show();

	const CGirl g1 = g;
	cout << "��1�������ѣ�" << g1[1] << endl;
}
