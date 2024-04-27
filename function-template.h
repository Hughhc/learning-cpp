#pragma once

#include <iostream>

using namespace std;

namespace function_template
{
	// ����ģ�� ��������ģ��Ĵ������ͷ�ļ���
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
		cout << "�װ���" << no << "�ţ�" << message << endl;
	}

	// ����ģ��ľ��廯��ʵ�壬�����ԭ�����ͨ����һ�������ԣ���������ͷ�ļ��У��������Դ�ļ���
	template <>
	void fswap(int& a, int& b);

		//void fswap(int &a, int &b);
	//void fswap(double& a, double& b);
	void print();
}
