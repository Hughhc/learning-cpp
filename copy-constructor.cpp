#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "copy-constructor.h"

// ��һ���Ѵ��ڵĶ��󴴽��µĶ��󣬲�����ã���ͨ�����캯�������ǵ��ÿ������캯��
// �������û�ж��忽�����캯�������������ṩһ���������캯�������Ĺ����ǰ��Ѵ��ڶ���ĳ�Ա������ֵ���¶���ĳ�Ա����
class Cgirl
{
public:
	string m_name;      // ����
	int    m_age;       // ����

	// û�в�������ͨ���캯��
	Cgirl(){ m_name.clear(); m_age = 0; cout << "������Cgirl���캯��" << endl; }

	// û�����صĿ������캯����Ĭ�Ͽ���������
	//Cgirl(const Cgirl& g) { m_name = "Ư����" + g.m_name; m_age = g.m_age - 1; cout << "������Cgirl(const Cgirl& g)�������캯��" << endl; }
	
	// ������������˿������캯��ȴû�ж���Ĭ�ϵĿ������캯����������Ҳ���ṩĬ�ϵĿ������캯��
	// ���صĿ������캯����Ĭ�Ͽ���������
	Cgirl(const Cgirl& g, int i) { m_name = "Ư����" + g.m_name; m_age = g.m_age - i; cout << "������Cgirl(const Cgirl& g,int i)�������캯��" << endl; }

	// ��������
	~Cgirl() { cout << "������~Cgirl()\n"; }

	// ��ʾ��Ա����
	void show(){ cout << "������" << m_name << "�����䣺" << m_age << endl; }
};

//// ��ֵ���ݵķ�ʽ���ú���ʱ�����ʵ��Ϊ���󣬻���ÿ������캯��
//void  func(Cgirl g)
//{
//	g.show();
//}

//// ������ֵ�ķ�ʽ���ض���ʱ�����ܻ���ÿ������캯����VS����ã�Linux���ᣬg++�����������Ż�)
//Cgirl func()
//{
//	Cgirl g;
//	g.m_name = "��ʩ";
//	g.m_age = 18;
//	cout << "����gg��ַַ��"<<&g<<endl;
//	return g;
//}

void printCGirl()
{
	//Cgirl g1;
	////Cgirl g2 = Cgirl();
	////Cgirl* g3 = new Cgirl;
	////Cgirl* g4 = new Cgirl();

	////delete g3;
	////delete g4;
	//g1.m_name = "��ʩ"; 
	//g1.m_age = 18;
	////��һ���Ѵ��ڵĶ��󴴽��µĶ����﷨��
	//// �����¶��������Ѵ��ڵĶ�������
	//// �����¶�����=�Ѵ��ڵĶ�����
	////Cgirl g2(g1);
	////Cgirl g2 = g1;
	////g2.show();

	//func(g1);
	//Cgirl g = func();
	//g.show();
	//cout << "����gg��ַַ��" << &g << endl;
	
	Cgirl g1;
	g1.m_name = "��ʩ";
	g1.m_age = 18;
	//Cgirl g2(g1, 2);
	Cgirl g2(g1);
	g2.show();
}
