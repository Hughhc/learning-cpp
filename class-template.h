#pragma once

#include <iostream>

using namespace std;

namespace class_template
{
	//// 类模板
	//template <class T1,class T2>
	//class A
	//{
	//public:
	//	T1 m_a;  // 通用类型用于成员变量
	//	T2 m_b;  // 通用类型用于成员变量

	//	A() {}  // 默认构造函数是空的
	//	// 通用类型用于成员函数的参数
	//	A(T1 a, T2 b) :m_a(a), m_b(b){}
	//	// 通用类型用于成员函数的返回值
	//	T1 geta()
	//	{
	//		T1 a = 2;
	//		return m_a + a;
	//	}
	//	T2 getb()
	//	{
	//		return m_b;
	//	}
	//};

	// typedef string DataType;        // 定义栈元素的数据类型。

	template <class DataType>
	class Stack //栈类
	{
	private:
		DataType* items;     // 栈数组
		int  stacksize; // 栈实际的大小
		int  top;		// 栈顶指针
	public:
		// 构造函数：1）分配栈数组内存；2）把栈顶指针初始化为0
		Stack(int size) :stacksize(size), top(0) 
		{
			items = new DataType[stacksize];
		}
		~Stack() 
		{
			delete[] items; 
			items = nullptr;
		}
		bool isempty() const // 判断栈是否为空
		{
			return top == 0;
		}
		bool isfull() const // 判断栈是否已满
		{
			return top == stacksize;
		}
		bool push(const DataType& item) // 元素入栈
		{
			if (top < stacksize)
			{ 
				items[top++] = item; 
				return true; 
			}
			return false;
		}
		bool pop(DataType& item) // 元素出栈
		{
			if (top > 0) { item = items[--top]; return true; }
			return false;
		}
	};

	// Array数组 容器
	template <class T, int len = 10>
	class Array
	{
	private:
		T items[len];      // 数组元素
	public:
		Array() {}    	   // 默认构造函数
		~Array() {}         // 析构函数
		T& operator[](int ii) { return items[ii]; }  // 重载操作符[]，可以修改数组中的元素
		const T& operator[](int ii) const { return items[ii]; }  // 重载操作符[]，不能修改数组中的元素
	};

	// Vector容器
	template <class T>
	class Vector
	{
	private:
		int len;               // 数组元素的个数
		T* items;           // 数组元素
	public:
		// 默认构造函数，分配内存
		Vector(int size = 10) :len(size) {
			items = new T[len];
		}
		~Vector() {         // 析构函数
			delete[] items; items = nullptr;
		}
		void resize(int size) {         // 护展数组的内存空间
			if (size <= len) return;   // 只能往更大扩展
			T* tmp = new T[size];   // 分配更大的内存空间
			for (int ii = 0; ii < len; ii++) tmp[ii] = items[ii];     // 把原来数组中的元素复制到新数组
			delete[] items;    // 释放原来的数组
			items = tmp;      // 让数组指针指向新数组
			len = size;           // 扩展后的数组长度
		}
		int size() const { return len; }     // 获取数组长度
		T& operator[](int ii) {   // 重载操作符[]，可以修改数组中的元素
			if (ii >= len) resize(ii + 1);    // 扩展数组
			return items[ii];
		}
		const T& operator[](int ii) const { return items[ii]; }  // 重载操作符[]，不能修改数组中的元素
	};
	
	void print();
}
