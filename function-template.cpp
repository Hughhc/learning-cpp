#include "function-template.h"

//void function_template::fswap(int &a,int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void function_template::fswap(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}

// ����ģ��
template <typename T>
void fswap(T &a,T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T1,typename T2>
void show(T1& no, T2& message)
{
	cout << "�װ���" << no << "�ţ�" << message << endl;
}

//class CGirl
//{
//public:
//	template <typename T>
//	CGirl(T a)
//	{
//		cout << "a=" << a << endl;
//	}
//	template <typename T>
//	void show(T b)
//	{
//		cout << "b=" << b << endl;
//	}
//};

void function_template::print()
{
	//int a = 10, b = 30;
	//double a = 10.5, b = 30.2;
	//string a = "��ʩ", b = "����";
	//cout << "a=" << a << ",b=" << b << endl;
	////fswap(a, b);
	//fswap<string>(a, b);
	//cout << "a=" << a << ",b=" << b << endl;

	//CGirl g("��ʩ");
	//g.show(5);
	//g.show(3.2);
	int bh = 3;
	string message = "����һֻɵɵ��";
	show(bh, message);
}
