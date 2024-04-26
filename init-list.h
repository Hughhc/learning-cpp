#pragma once
#include <iostream>

using namespace std;

namespace init_list
{
	class CBoy
	{
	public:
		string m_name;       // ĞÕÃû
		CBoy();
		CBoy(string name);
		CBoy(const CBoy& b);
	};

	class CGirl
	{
	public:
		string    m_name; // ĞÕÃû
		//int     m_age;  // ÄêÁä
		const int m_age;  // ÄêÁä
		//CBoy    m_boy;  // ÄĞÅóÓÑ
		CBoy&     m_boy;  // ÄĞÅóÓÑ

		CGirl();
		CGirl(string name, int age, CBoy &boy);
		void show();
	};

	void print();
}
