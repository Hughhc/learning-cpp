#pragma once
#include <iostream>

using namespace std;

namespace const_function
{
	class CGirl
	{
	public:
		mutable string m_name; // ĞÕÃû
		int    m_age;  // ÄêÁä

		//CGirl(string name, int age) const;
		CGirl(string name, int age);
		void show() const;
		void show1() const;
		void show2() const;
		void show3();
		void show4();
	};

	void print();
}
