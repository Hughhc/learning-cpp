#pragma once

#include <iostream>

using namespace std;

namespace memory_pool
{
	class CGirl
	{
	public:
		int        m_bh;               // 编号。
		int        m_xw;               // 胸围。
		static char* m_pool;           // 内存池的起始地址。

		static bool initpool();
		static void freepool();
		CGirl(int bh, int xw);
		~CGirl();
		void* operator new(size_t size);
		void operator delete(void* ptr);
	};

	int printCGirl();
}
