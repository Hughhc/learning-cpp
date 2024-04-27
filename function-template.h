#pragma once

#include <iostream>

using namespace std;

namespace function_template
{
	// 函数模板 创建函数模板的代码放在头文件中
	template <typename T>
	void fswap(T& a, T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}

	template <typename T1, typename T2>
	void show(T1& no, T2& message)
	{
		cout << "亲爱的" << no << "号：" << message << endl;
	}

	// 函数模板的具体化有实体，编译的原理和普通函数一样，所以，声明放在头文件中，定义放在源文件中
	template <>
	void fswap(int& a, int& b);

		//void fswap(int &a, int &b);
	//void fswap(double& a, double& b);
	void print();
}
