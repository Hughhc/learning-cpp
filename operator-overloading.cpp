#include "operator-overloading.h"

//operator_overloading::CGirl::CGirl()
//{
//	m_name = "��ʩ";
//	m_xw = 87;
//	m_score = 30;
//}

//// �±���������� ���캯��
//operator_overloading::CGirl::CGirl()
//{
//	m_boys[0] = "�Ӷ�";
//	m_boys[1] = "�˰�";
//	m_boys[2] = "����"; 
//}

//void operator_overloading::CGirl::show()
//{
//	cout << "������" << m_name << "����Χ��" << m_xw << "�����֣�" << m_score << endl;
//}

//// �±����������
//void operator_overloading::CGirl::show()
//{ 
//	cout << m_boys[0] << "��" << m_boys[1] << "��" << m_boys[2] << endl;
//}

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

//// �±����������
//string& operator_overloading::CGirl::operator[](int ii)
//{
//	return m_boys[ii];
//}
//
//const string& operator_overloading::CGirl::operator[](int ii) const
//{
//	return m_boys[ii];
//}

//// ���ظ�ֵ�����
////�������ṩ��Ĭ�ϸ�ֵ��������ǳ������
////��������в����ڶ����ڴ�ռ䣬Ĭ�ϸ�ֵ���������������󣬷�����Ҫ�����
////��ֵ����Ϳ������첻ͬ������������ָԭ���Ķ��󲻴��ڣ����Ѵ��ڵĶ�����й��죻��ֵ������ָ�Ѿ��������������󣬰�����һ������ĳ�Ա������ֵ������һ������ĳ�Ա����
//operator_overloading::CGirl::CGirl()
//{ 
//	m_ptr = nullptr; 
//}
//
//operator_overloading::CGirl::~CGirl()
//{ 
//	if (m_ptr)  delete m_ptr; 
//}
//
//void operator_overloading::CGirl::show()
//{ 
//	cout << "��ţ�" << m_bh << "��������" << m_name << "��m_ptr=" << m_ptr <</* "��*m_ptr=" << *m_ptr<< */endl; 
//}
//
//operator_overloading::CGirl& operator_overloading::CGirl::operator=(const CGirl& g)
//{
//	if (this == &g) return *this;          // ������Լ����Լ���ֵ��
//
//	if (g.m_ptr == nullptr)    // ���Դ�����ָ��Ϊ�գ������Ŀ�������ڴ��ָ�롣
//	{
//		if (m_ptr != nullptr) { delete m_ptr; m_ptr = nullptr; }
//	}
//	else    // ���Դ�����ָ�벻Ϊ�ա�
//	{
//		// ���Ŀ������ָ��Ϊ�գ��ȷ����ڴ档
//		if (m_ptr == nullptr) m_ptr = new int;
//		// Ȼ�󣬰�Դ�����ڴ��е����ݸ��Ƶ�Ŀ�������ڴ��С�
//		memcpy(m_ptr, g.m_ptr, sizeof(int));
//	}
//
//	m_bh = g.m_bh; m_name = g.m_name;
//	cout << "���������ظ�ֵ������\n" << endl;
//	return *this;
//}

// ����new&delete�����
//// ȫ�ֱ�������
//void* operator new(size_t size)   // ����������size_t��unsigned long long��������ֵ������void*
//{
//	cout << "������ȫ�����ص�new��" << size << "�ֽڡ�\n";
//	void* ptr = malloc(size);        // �����ڴ档
//	cout << "���뵽���ڴ�ĵ�ַ�ǣ�" << ptr << endl;
//	return ptr;
//}
//
//void operator delete(void* ptr)   // ����������void *������ֵ������void
//{
//	cout << "������ȫ�����ص�delete��\n";
//	if (ptr == 0) return;       // �Կ�ָ��delete�ǰ�ȫ�ġ�
//	free(ptr);      // �ͷ��ڴ档
//}

operator_overloading::CGirl::CGirl(int bh, int xw)
{ 
	m_bh = bh, m_xw = xw;
	cout << "�����˹��캯��CGirl()\n"; 
}

operator_overloading::CGirl::~CGirl()
{ 
	cout << "��������������~CGirl()\n"; 
}

void* operator_overloading::CGirl::operator new(size_t size)   // ����������size_t��unsigned long long��������ֵ������void*��
{
	cout << "������������ص�new��" << size << "�ֽڡ�\n";
	void* ptr = malloc(size);        // �����ڴ档
	cout << "���뵽���ڴ�ĵ�ַ�ǣ�" << ptr << endl;
	return ptr;
}

void operator_overloading::CGirl::operator delete(void* ptr)   // ����������void *������ֵ������void��
{
	cout << "������������ص�delete��\n";
	if (ptr == 0) return;       // �Կ�ָ��delete�ǰ�ȫ�ġ�
	free(ptr);      // �ͷ��ڴ档
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

	//// �±���������� �±�����������Գ�Ա��������ʽ��������
	//CGirl g;
	//g[1] = "������";
	//cout << "��1�������ѣ�" << g[1] << endl;
	//g.show();

	//const CGirl g1 = g;
	//cout << "��1�������ѣ�" << g1[1] << endl;

	//// ���ظ�ֵ�����
	//CGirl g1, g2;
	//g1.m_bh = 8; g1.m_name = "��ʩ"; g1.m_ptr = new int(3);
	//g1.show();
	//g2.show();

	//g2 = g1;
	//g2.show();
	//cout << "*g1.m_ptr=" << *g1.m_ptr << "��*g2.m_ptr=" << *g2.m_ptr << endl;

	// ����new&delete�����
	//int* p1 = new int(3);
	//cout << "p1=" << (void*)p1 << "��*p1=" << *p1 << endl;
	//delete p1;

	CGirl* p2 = new CGirl(3, 8);
	cout << "p2�ĵ�ַ�ǣ�" << p2 << "��ţ�" << p2->m_bh << "����Χ��" << p2->m_xw << endl;
	delete p2;
}
