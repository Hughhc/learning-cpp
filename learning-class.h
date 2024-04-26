#pragma once

#include <iostream>

using namespace std;

namespace learning_class {
	//typedef struct st_girl Stgirl; 结构体
	//class cl_girl; 类
	class CGirl      // 超女基本信息类Cgirl
	{
	public:
		string m_name;      // 姓名
		int    m_age = 20;  // 年龄

		void initData();
		int getage();
		void setage(int age);
		void clearData();
		void setValue(string name, int age);
		void show();
	};

	void print();
	//void setValue(Stgirl& girl, string name, int age, int height, double weight, char sex,
	//	int yz, string special, string memo);
}
