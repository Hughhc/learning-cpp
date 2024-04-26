#pragma once
#include <iostream>

using namespace std;

namespace this_pointer
{
	class CGirl
	{
	public:
		string m_name; // 姓名
		int    m_yz;  // 年龄
		// 使用this *this可以表示对象
		int a;

		CGirl(string name, int age);
		void show() const;
		const CGirl& pk(const CGirl& g) const; // 如果在成员函数的括号后面使用const，那么将不能通过this指针修改成员变量
		// 使用this
		void func(int a);
	};

	//const CGirl& pk(const CGirl& g1, const CGirl& g2);  // C风格
	void print();
}
