#pragma once
#include <iostream>

using namespace std;

namespace light_cope {
	class CGirl
	{
	public:
		string m_name;      // ����
		int    m_age;       // ����
		int* m_ptr;       // ��ַ

		// û�в�������ͨ���캯��
		CGirl();

		// û�����صĿ������캯����Ĭ�Ͽ���������
		CGirl(const CGirl& g);

		// ��������
		~CGirl();

		// ��ʾ��Ա����
		void show();
	};

	void printCGirl();
}
