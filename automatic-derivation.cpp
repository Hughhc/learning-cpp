#include "automatic-derivation.h"

//string func()
//{
//	return "��ʩ";
//}

double automatic_derivation::func(double b, const char* c, float d, short e, long f)
{
	cout << "b=" << b << ",c=" << c << ",d=" << d << ",e=" << e << ",f=" << f << endl;
	return 5.5;
}

void automatic_derivation::print()
{
	//int a = 3;			cout << "a=" << a << endl;
	//double b = 3.3;		cout << "b=" << b << endl;
	//string c = "��ʩ";	cout << "c=" << c << endl;

	//auto a = 3 + 1;		cout << "a=" << a << endl;
	//auto b = 3.3 + a;	cout << "b=" << b << endl;
	//auto c = "��ʩ";	cout << "c=" << c << endl;
	//auto d = func();	cout << "d=" << d << endl;

	double (*pf)(double, const char*, float, short, long);    // ��������ָ��pf��
	pf = func;
	pf(2, "��ʩ", 3, 4, 5);
	auto pf1 = func;
	pf1(2, "��ʩ", 3, 4, 5);
}
