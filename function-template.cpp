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

template <>
void function_template::fswap(int &a, int &b)     // ����ģ��ľ��廯�汾��
{
	cout << "ʹ���˾��廯�ĺ���ģ�塣\n";
}

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
	int a = 10, b = 20;
	fswap(a, b);
}
