#pragma once

#include <iostream>

using namespace std;

namespace cope_constructor {
	class CGirl
	{
	public:
		string m_name;      // ĞÕÃû
		int    m_age;       // ÄêÁä

		CGirl();
		CGirl(const CGirl& g, int i);
		~CGirl();
		void show();
	};

	void print();
}
