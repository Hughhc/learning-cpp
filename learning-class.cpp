#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "learning-class.h"

//struct st_girl    // ��Ů������Ϣ�ṹ��st_girl������˳�Ůȫ���������
//{
//	string name;    // ����
//	int    age;     // ����
//	int    height;  // ��ߣ�cm��
//	double weight;  // ���أ�kg��
//	char   sex;     // �Ա�X-Ů��Y-��
//	int    yz;      // ��ֵ��1-Ư����2-һ�㣻3-�������
//	string special; // �س�
//	string memo;    // ��ע
//};
//
//void setValue(Stgirl& girl, string name, int age, int height, double weight, char sex, 
//	int yz, string special, string memo)
//{
//	girl.name = name;
//	girl.age = age;
//	girl.height = height;
//	girl.weight = weight;
//	girl.sex = sex;
//	girl.yz = yz;
//	girl.special = special;
//	girl.memo = memo;
//}
//
//void show(const Stgirl& girl)
//{
//	cout << "������"   << girl.name    << "�����䣺" << girl.age  << "����ߣ�" << girl.height
//		 << "�����أ�" << girl.weight  << "���Ա�" << girl.sex  << "����ֵ��" << girl.yz
//		 << "���س���" << girl.special << "����ע��" << girl.memo << endl;
//}

//struct st_girl      // ��Ů������Ϣ�ṹ��st_girl������˳�Ůȫ���������
//{
//	string name;    // ����
//	int    age;     // ����
//
//	void setValue(string name1, int age1) // ���ó�Ա������ֵ
//	{
//		name = name1;
//		age = age1;
//	}
//
//	void show() // ��ʾ��Ա������ֵ
//	{
//		cout << "������" << name << "�����䣺" << age << endl;
//	}
//};

// ����������ж���ĺ��������Զ���Ϊ�������������������֮�ⶨ��ĺ������ʹ����inline�޶�����Ҳ����������
class cl_girl      // ��Ů������Ϣ��Cgirl
{
public:
	//string name;      // ����
	//int    age = 20;  // ����

	// Ϊ��������ĳ�Ա�����ͳ�Ա�������βΣ��ѳ�Ա��������m_ǰ׺��_��׺����m_name��name_
	string m_name;      // ����
	int    m_age = 20;  // ����

	void initData()
	{
		m_name.clear();
		m_age = 0;
	}
	int getage()     // ��ȡ��Ů�������Եķ���
	{
		return m_age;
	}
	void setage(int age) // ���ó�Ů�������Եķ���
	{
		m_age = age;
	}
	void clearData()
	{
		initData();
	}
	//int count = 0;   // �ݹ����
	//enum { girl = 1, boy = 2 };
	//int sex;         // �Ա�1-Ů��2-��
	
	//void setValue(string name1, int age1) // ���ó�Ա������ֵ
	//{
	//	name = name1;
	//	age = age1;
	//}
	void setValue(string name, int age);

	void show() // ��ʾ��Ա������ֵ
	{
		//if (++count > 10) return;   // ��ֹ����
		cout << "������" << m_name << "�����䣺" << m_age << endl;
		//show();
		//if (sex==girl) cout << sex << endl;
	}
};

//void cl_girl::setValue(string name1, int age1)      // ���ó�Ա������ֵ
inline void cl_girl::setValue(string name, int age) // ����Ϊ��������
{
	m_name = name;
	m_age = age;
	//show();
}

void printStgirl()
{
	//Stgirl girl = {};
	cl_girl girl;
	
	//girl.name = "��ʩ";
	//girl.special = "�����黭";
	//girl.memo = "�Ĵ���Ů֮һ";
	//setValue(girl, "��ʩ", 18, 170, 45.0, 'X', 1, "�����黭", "�Ĵ���Ů֮һ");
	girl.setValue("��ʩ", 18);

	//cout << "������"   << girl.name    << "�����䣺" << girl.age  << "����ߣ�" << girl.height
	//	 << "�����أ�" << girl.weight  << "���Ա�" << girl.sex  << "����ֵ��" << girl.yz 
	//	 << "���س���" << girl.special << "����ע��" << girl.memo << endl;
	//show(girl);
	girl.show();
	//girl.sex = girl.boy;
	//girl.age = 18;
}
