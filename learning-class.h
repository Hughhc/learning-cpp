#pragma once

#include <iostream>

using namespace std;

namespace learning_class {
	//typedef struct st_girl Stgirl; �ṹ��
	//class cl_girl; ��
	class CGirl      // ��Ů������Ϣ��Cgirl
	{
	public:
		string m_name;      // ����
		int    m_age = 20;  // ����

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
