#pragma once

#include <iostream>

using namespace std;

namespace structure_and_destruction {
	class CGirl
	{
	public:
		string m_name;      // ����
		int    m_age;       // ����
		char   m_memo[301]; // ��ע

		CGirl();
		CGirl(string name);
		CGirl(int age);
		CGirl(string name, int age);
		void initdata();
		~CGirl();
		void show();
	};

	void printCGirl();
}
