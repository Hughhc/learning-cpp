#pragma once

#include <iostream>

using namespace std;

namespace cope_constructor {
	class CGirl
	{
	public:
		string m_name;      // ����
		int    m_age;       // ����

		CGirl();
		CGirl(const CGirl& g, int i);
		~CGirl();
		void show();
	};

	void print();
}
