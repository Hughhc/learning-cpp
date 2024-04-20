#pragma once

#include <iostream>

using namespace std;

namespace structure_and_destruction {
	class CGirl
	{
	public:
		string m_name;      // ĞÕÃû
		int    m_age;       // ÄêÁä
		char   m_memo[301]; // ±¸×¢

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
