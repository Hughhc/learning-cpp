#pragma once

#include <iostream>

using namespace std;

namespace operator_overloading
{
	class CGirl
	{
		// 友元，函数
		friend CGirl& operator+(CGirl& g, int score);
		friend CGirl& operator-(CGirl& g, int score);
		friend CGirl& operator+(int score, CGirl& g);
		friend CGirl& operator+(CGirl& g1, CGirl& g2);
	private:
		int m_xw;		//胸围
		int m_score;	//分数
	public:
		string m_name;  // 姓名

		//默认构造函数
		CGirl();
		// 自我介绍
		void show();

		//// 成员函数重载
		//CGirl& operator+(int score);
	};

	// 重载运算符 非成员函数重载
	CGirl& operator+(CGirl& g, int score);
	CGirl& operator-(CGirl& g, int score);
	// 重载函数参数列表中的顺序决定了操作数的位置
	CGirl& operator+(int score, CGirl& g);
	CGirl& operator+(CGirl& g1, CGirl& g2);

	void printCGirl();
}
