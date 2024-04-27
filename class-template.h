#pragma once

#include <iostream>

using namespace std;

namespace class_template
{
	//// ��ģ��
	//template <class T1,class T2>
	//class A
	//{
	//public:
	//	T1 m_a;  // ͨ���������ڳ�Ա����
	//	T2 m_b;  // ͨ���������ڳ�Ա����

	//	A() {}  // Ĭ�Ϲ��캯���ǿյ�
	//	// ͨ���������ڳ�Ա�����Ĳ���
	//	A(T1 a, T2 b) :m_a(a), m_b(b){}
	//	// ͨ���������ڳ�Ա�����ķ���ֵ
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

	// typedef string DataType;        // ����ջԪ�ص��������͡�

	template <class DataType>
	class Stack //ջ��
	{
	private:
		DataType* items;     // ջ����
		int  stacksize; // ջʵ�ʵĴ�С
		int  top;		// ջ��ָ��
	public:
		// ���캯����1������ջ�����ڴ棻2����ջ��ָ���ʼ��Ϊ0
		Stack(int size) :stacksize(size), top(0) 
		{
			items = new DataType[stacksize];
		}
		~Stack() 
		{
			delete[] items; 
			items = nullptr;
		}
		bool isempty() const // �ж�ջ�Ƿ�Ϊ��
		{
			return top == 0;
		}
		bool isfull() const // �ж�ջ�Ƿ�����
		{
			return top == stacksize;
		}
		bool push(const DataType& item) // Ԫ����ջ
		{
			if (top < stacksize)
			{ 
				items[top++] = item; 
				return true; 
			}
			return false;
		}
		bool pop(DataType& item) // Ԫ�س�ջ
		{
			if (top > 0) { item = items[--top]; return true; }
			return false;
		}
	};

	// Array���� ����
	template <class T, int len = 10>
	class Array
	{
	private:
		T items[len];      // ����Ԫ��
	public:
		Array() {}    	   // Ĭ�Ϲ��캯��
		~Array() {}         // ��������
		T& operator[](int ii) { return items[ii]; }  // ���ز�����[]�������޸������е�Ԫ��
		const T& operator[](int ii) const { return items[ii]; }  // ���ز�����[]�������޸������е�Ԫ��
	};

	// Vector����
	template <class T>
	class Vector
	{
	private:
		int len;               // ����Ԫ�صĸ���
		T* items;           // ����Ԫ��
	public:
		// Ĭ�Ϲ��캯���������ڴ�
		Vector(int size = 10) :len(size) {
			items = new T[len];
		}
		~Vector() {         // ��������
			delete[] items; items = nullptr;
		}
		void resize(int size) {         // ��չ������ڴ�ռ�
			if (size <= len) return;   // ֻ����������չ
			T* tmp = new T[size];   // ���������ڴ�ռ�
			for (int ii = 0; ii < len; ii++) tmp[ii] = items[ii];     // ��ԭ�������е�Ԫ�ظ��Ƶ�������
			delete[] items;    // �ͷ�ԭ��������
			items = tmp;      // ������ָ��ָ��������
			len = size;           // ��չ������鳤��
		}
		int size() const { return len; }     // ��ȡ���鳤��
		T& operator[](int ii) {   // ���ز�����[]�������޸������е�Ԫ��
			if (ii >= len) resize(ii + 1);    // ��չ����
			return items[ii];
		}
		const T& operator[](int ii) const { return items[ii]; }  // ���ز�����[]�������޸������е�Ԫ��
	};
	
	void print();
}
