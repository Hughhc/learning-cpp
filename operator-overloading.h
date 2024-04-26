#pragma once

#include <iostream>

using namespace std;

// 全局变量重载new&delete运算符
//void* operator new(size_t size);
//void operator delete(void* ptr);

namespace operator_overloading
{
	//class CGirl
	//{
		//C++编译器可能会给类添加四个函数：
		// 默认构造函数，空实现
		// 默认析构函数，空实现
		// 默认拷贝构造函数，对成员变量进行浅拷贝
		// 默认赋值函数, 对成员变量进行浅拷贝

		// 友元，函数
		//friend CGirl& operator+(CGirl& g, int score);
		//friend CGirl& operator-(CGirl& g, int score);
		//friend CGirl& operator+(int score, CGirl& g);
		//friend CGirl& operator+(CGirl& g1, CGirl& g2);

		//friend ostream& operator<<(ostream& cout, const CGirl& g);
	//private:
	//	//// 左移运算符重载
	//	//string m_name;  // 姓名

	//	//int m_xw;		//胸围
	//	//int m_score;	//分数

	//	// 下标运算符重载
	//	string m_boys[3];//男朋友
	//public:
	//	string m_name;  // 姓名

		////默认构造函数
		//CGirl();
		//// 自我介绍
		//void show();

		//// 成员函数重载
		////CGirl& operator+(int score);

		//// 下标运算符重载 下标运算符必须以成员函数的形式进行重载
		//string& operator[](int ii); // 不仅可以访问数组元素，还可以修改数组元素
		//const string& operator[](int ii) const; // 只能访问而不能修改数组元素

		// 重载赋值运算符
	//public:
	//	int    m_bh;    // 编号
	//	string m_name;  // 姓名
	//	int* m_ptr;   // 计划使用堆区内存

	//	CGirl();
	//	~CGirl();
	//	// 显示全部成员变量。
	//	void show();
	//	CGirl& operator=(const CGirl& g);

	//};

	// 重载运算符 非成员函数重载
	//CGirl& operator+(CGirl& g, int score);
	//CGirl& operator-(CGirl& g, int score);
	//// 重载函数参数列表中的顺序决定了操作数的位置
	//CGirl& operator+(int score, CGirl& g);
	//CGirl& operator+(CGirl& g1, CGirl& g2);

	//// 左移运算符重载 只能使用非成员函数版本
	//ostream& operator<<(ostream& cout, const CGirl& g);

	// 重载new&delete运算符
	class CGirl
	{
	public:
		int m_bh; // 编号。
		int m_xw; // 胸围。

		CGirl(int bh, int xw);
		~CGirl();
		void* operator new(size_t size);
		void operator delete(void* ptr);
	};

	void print();
}
