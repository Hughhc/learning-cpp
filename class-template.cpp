#include "class-template.h"

void class_template::print()
{
	//A<int, string> a; // ��ģ����A��������a
	//a.m_a = 10; a.m_b = "��ʩ";
	//cout << "a.geta()=" << a.geta() << endl;
	//cout << "a.getb()=" << a.getb() << endl;

	Stack<string> ss(5);       // ����ջ���󣬴�С��5

	// Ԫ����ջ��
	//ss.push(1); ss.push(2); ss.push(3); ss.push(4); ss.push(5);
	ss.push("��ʩ"); ss.push("����"); ss.push("����"); ss.push("����");

	// Ԫ�س�ջ��
	string item;
	//int item;
	while (ss.isempty() == false)
	{
		ss.pop(item);   cout << "item = " << item << endl;
	}

	//Array<string,10> aa;  // ����ģ����Array�Ķ���
	//Array<string> aa;     // ����ģ����Array�Ķ���ʹ��ȱʡֵ
	Vector<int> aa(1);      // ����ģ����Vector�Ķ���
	aa[0] = 5; aa[1] = 8; aa[2] = 3; aa[3] = 2; aa[4] = 7;
	//aa[0] = "��ʩ"; aa[1] = "����"; aa[2] = "����"; aa[3] = "����"; aa[4] = "С��";

	for (int ii = 0; ii < 5; ii++) cout << "aa[" << ii << "]=" << aa[ii] << endl;
}
