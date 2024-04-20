#pragma once
#include <iostream>

using namespace std;

namespace light_cope {
	class CGirl
	{
	public:
		string m_name;      // 姓名
		int    m_age;       // 年龄
		int* m_ptr;       // 地址

		// 没有参数的普通构造函数
		CGirl();

		// 没有重载的拷贝构造函数（默认拷贝函数）
		CGirl(const CGirl& g);

		// 析构函数
		~CGirl();

		// 显示成员变量
		void show();
	};

	void printCGirl();
}
