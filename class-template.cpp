#include "class-template.h"

void class_template::print()
{
	//A<int, string> a; // 用模板类A创建对象a
	//a.m_a = 10; a.m_b = "西施";
	//cout << "a.geta()=" << a.geta() << endl;
	//cout << "a.getb()=" << a.getb() << endl;

	Stack<string> ss(5);       // 创建栈对象，大小是5

	// 元素入栈。
	//ss.push(1); ss.push(2); ss.push(3); ss.push(4); ss.push(5);
	ss.push("西施"); ss.push("冰冰"); ss.push("幂幂"); ss.push("金莲");

	// 元素出栈。
	string item;
	//int item;
	while (ss.isempty() == false)
	{
		ss.pop(item);   cout << "item = " << item << endl;
	}

	//Array<string,10> aa;  // 创建模板类Array的对象
	//Array<string> aa;     // 创建模板类Array的对象，使用缺省值
	Vector<int> aa(1);      // 创建模板类Vector的对象
	aa[0] = 5; aa[1] = 8; aa[2] = 3; aa[3] = 2; aa[4] = 7;
	//aa[0] = "西施"; aa[1] = "冰冰"; aa[2] = "幂幂"; aa[3] = "金莲"; aa[4] = "小乔";

	for (int ii = 0; ii < 5; ii++) cout << "aa[" << ii << "]=" << aa[ii] << endl;
}
