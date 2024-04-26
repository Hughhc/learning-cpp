#pragma once
#include <iostream>

using namespace std;

namespace init_list
{
	class CBoy
	{
	public:
		string m_name;       // ����
		CBoy();
		CBoy(string name);
		CBoy(const CBoy& b);
	};

	class CGirl
	{
	public:
		string    m_name; // ����
		//int     m_age;  // ����
		const int m_age;  // ����
		//CBoy    m_boy;  // ������
		CBoy&     m_boy;  // ������

		CGirl();
		CGirl(string name, int age, CBoy &boy);
		void show();
	};

	void print();
}
