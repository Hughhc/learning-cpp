#pragma once
#include <iostream>

using namespace std;

namespace this_pointer
{
	class CGirl
	{
	public:
		string m_name; // ����
		int    m_yz;  // ����
		// ʹ��this *this���Ա�ʾ����
		int a;

		CGirl(string name, int age);
		void show() const;
		const CGirl& pk(const CGirl& g) const; // ����ڳ�Ա���������ź���ʹ��const����ô������ͨ��thisָ���޸ĳ�Ա����
		// ʹ��this
		void func(int a);
	};

	//const CGirl& pk(const CGirl& g1, const CGirl& g2);  // C���
	void print();
}
