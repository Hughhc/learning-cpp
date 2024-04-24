#pragma once

#include <iostream>

using namespace std;

namespace memory_pool
{
	class CGirl
	{
	public:
		int        m_bh;               // ��š�
		int        m_xw;               // ��Χ��
		static char* m_pool;           // �ڴ�ص���ʼ��ַ��

		static bool initpool();
		static void freepool();
		CGirl(int bh, int xw);
		~CGirl();
		void* operator new(size_t size);
		void operator delete(void* ptr);
	};

	int printCGirl();
}
