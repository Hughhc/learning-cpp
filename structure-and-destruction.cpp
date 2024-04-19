#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "structure-and-destruction.h"

class Cgirl
{
public:
	string m_name;      // ����
	int    m_age;       // ����
	char   m_memo[301]; // ��ע

	//     �������ڹ���/����������д̫��Ĵ��룬���Ե��ó�Ա����
	// ���캯�� ���˳�ʼ�����������ù��캯����̫�๤������ֻ�ܳɹ�����ʧ�ܵģ�
	Cgirl()  
	{
		//m_name.clear();
		//m_age = 0;
		//memset(m_memo, 0, sizeof(m_memo));
		initdata();
		cout << "������Cgirl���캯��" << endl;
	}
	Cgirl(string name)
	{
		//m_name.clear();
		//m_age = 0;
		//memset(m_memo, 0, sizeof(m_memo));
		initdata();
		cout << "������Cgirl(name)���캯��" << endl;
		//Cgirl(); // ����һ������������ʱ���󣩣������ǵ��ù��캯�� ��ʱ����û�����֣���������������
		m_name = name;
	}
	Cgirl(int age)
	{
		//m_name.clear();
		//m_age = 0;
		//memset(m_memo, 0, sizeof(m_memo));
		initdata();
		cout << "������Cgirl(age)���캯��" << endl;
		//Cgirl(); // ����һ������������ʱ���󣩣������ǵ��ù��캯�� ��ʱ����û�����֣���������������
		m_age = age;
	}
	Cgirl(string name,int age)
	{
		//m_name.clear();
		//m_age = 0;
		//memset(m_memo, 0, sizeof(m_memo));
		initdata();
		cout << "������Cgirl(name, age)���캯��" << endl;
		// Cgirl(); // �����Ա������ָ�룬û�е��ù��캯����ָ��û�г�ʼ�����������ط�û�з���ͳ�ΪҰָ�롣�����������н���Deleteָ�룬��������
		m_name = name;
		m_age = age;
	}
	void initdata()
	{
		m_name.clear();
		m_age = 0;
		memset(m_memo, 0, sizeof(m_memo));
	}
	// ��������
	~Cgirl()
	{
		cout << "������~Cgirl()\n";
	}

	//void setValue(string name, int age) // ���ó�Ա����	
	//{
	//	m_name = name;
	//	m_age = age;
	//}

	void show() // ��ʾ��Ա����
	{
		cout << "������" << m_name << "�����䣺" << m_age << "����ע��" << m_memo << endl;
	}
};

void printCgirl()
{
	// ��ʽ���ù��캯��
	//Cgirl girl;            // �������󣬲����ó�ʼֵ
	//Cgirl girl("��ʩ");    // ����������������
	//Cgirl girl("��ʩ", 18);  // ����������������������

	// �ڹ��캯������������źͲ������ǵ��ù��캯�����Ǵ�����������
	// ������������������,��ʾ���ù��캯��
	//Cgirl girl=Cgirl();            // �������󣬲����ó�ʼֵ
	//Cgirl girl=Cgirl("��ʩ");    // ����������������
	//Cgirl girl=Cgirl("��ʩ", 18);  // ����������������������
	//Cgirl girl = 18; // ʹ�ø�ֵ�﷨��ʼ������
	//Cgirl girl;
	//girl = Cgirl("��ʩ", 18);
	//Cgirl* girl=new Cgirl;            // �������󣬲����ó�ʼֵ
	//Cgirl* girl=new Cgirl("��ʩ");    // ����������������
	Cgirl* girl=new Cgirl("��ʩ", 18);  // ����������������������

	girl->show();
	delete girl;
	//girl.~Cgirl();
}