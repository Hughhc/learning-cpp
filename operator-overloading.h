#pragma once

#include <iostream>

using namespace std;

// ȫ�ֱ�������new&delete�����
//void* operator new(size_t size);
//void operator delete(void* ptr);

namespace operator_overloading
{
	//class CGirl
	//{
		//C++���������ܻ��������ĸ�������
		// Ĭ�Ϲ��캯������ʵ��
		// Ĭ��������������ʵ��
		// Ĭ�Ͽ������캯�����Գ�Ա��������ǳ����
		// Ĭ�ϸ�ֵ����, �Գ�Ա��������ǳ����

		// ��Ԫ������
		//friend CGirl& operator+(CGirl& g, int score);
		//friend CGirl& operator-(CGirl& g, int score);
		//friend CGirl& operator+(int score, CGirl& g);
		//friend CGirl& operator+(CGirl& g1, CGirl& g2);

		//friend ostream& operator<<(ostream& cout, const CGirl& g);
	//private:
	//	//// �������������
	//	//string m_name;  // ����

	//	//int m_xw;		//��Χ
	//	//int m_score;	//����

	//	// �±����������
	//	string m_boys[3];//������
	//public:
	//	string m_name;  // ����

		////Ĭ�Ϲ��캯��
		//CGirl();
		//// ���ҽ���
		//void show();

		//// ��Ա��������
		////CGirl& operator+(int score);

		//// �±���������� �±�����������Գ�Ա��������ʽ��������
		//string& operator[](int ii); // �������Է�������Ԫ�أ��������޸�����Ԫ��
		//const string& operator[](int ii) const; // ֻ�ܷ��ʶ������޸�����Ԫ��

		// ���ظ�ֵ�����
	//public:
	//	int    m_bh;    // ���
	//	string m_name;  // ����
	//	int* m_ptr;   // �ƻ�ʹ�ö����ڴ�

	//	CGirl();
	//	~CGirl();
	//	// ��ʾȫ����Ա������
	//	void show();
	//	CGirl& operator=(const CGirl& g);

	//};

	// ��������� �ǳ�Ա��������
	//CGirl& operator+(CGirl& g, int score);
	//CGirl& operator-(CGirl& g, int score);
	//// ���غ��������б��е�˳������˲�������λ��
	//CGirl& operator+(int score, CGirl& g);
	//CGirl& operator+(CGirl& g1, CGirl& g2);

	//// ������������� ֻ��ʹ�÷ǳ�Ա�����汾
	//ostream& operator<<(ostream& cout, const CGirl& g);

	// ����new&delete�����
	class CGirl
	{
	public:
		int m_bh; // ��š�
		int m_xw; // ��Χ��

		CGirl(int bh, int xw);
		~CGirl();
		void* operator new(size_t size);
		void operator delete(void* ptr);
	};

	void print();
}
