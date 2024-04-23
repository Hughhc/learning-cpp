#pragma once

#include <iostream>

using namespace std;

namespace operator_overloading
{
	class CGirl
	{
		// 友元，函数
		//friend CGirl& operator+(CGirl& g, int score);
		//friend CGirl& operator-(CGirl& g, int score);
		//friend CGirl& operator+(int score, CGirl& g);
		//friend CGirl& operator+(CGirl& g1, CGirl& g2);

		friend ostream& operator<<(ostream& cout, const CGirl& g);
	private:
		// 左移运算符重载
		string m_name;  // 姓名

		int m_xw;		//胸围
		int m_score;	//分数
	public:
		//string m_name;  // 姓名

		//默认构造函数
		CGirl();
		// 自我介绍
		void show();

		//// 成员函数重载
		//CGirl& operator+(int score);
	};

	// 重载运算符 非成员函数重载
	//CGirl& operator+(CGirl& g, int score);
	//CGirl& operator-(CGirl& g, int score);
	//// 重载函数参数列表中的顺序决定了操作数的位置
	//CGirl& operator+(int score, CGirl& g);
	//CGirl& operator+(CGirl& g1, CGirl& g2);

	// 左移运算符重载 只能使用非成员函数版本
	ostream& operator<<(ostream& cout, const CGirl& g);

	void printCGirl();
}
