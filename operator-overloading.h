#pragma once

#include <iostream>

using namespace std;

namespace operator_overloading
{
	class CGirl
	{
		// ��Ԫ������
		//friend CGirl& operator+(CGirl& g, int score);
		//friend CGirl& operator-(CGirl& g, int score);
		//friend CGirl& operator+(int score, CGirl& g);
		//friend CGirl& operator+(CGirl& g1, CGirl& g2);

		friend ostream& operator<<(ostream& cout, const CGirl& g);
	private:
		// �������������
		string m_name;  // ����

		int m_xw;		//��Χ
		int m_score;	//����
	public:
		//string m_name;  // ����

		//Ĭ�Ϲ��캯��
		CGirl();
		// ���ҽ���
		void show();

		//// ��Ա��������
		//CGirl& operator+(int score);
	};

	// ��������� �ǳ�Ա��������
	//CGirl& operator+(CGirl& g, int score);
	//CGirl& operator-(CGirl& g, int score);
	//// ���غ��������б��е�˳������˲�������λ��
	//CGirl& operator+(int score, CGirl& g);
	//CGirl& operator+(CGirl& g1, CGirl& g2);

	// ������������� ֻ��ʹ�÷ǳ�Ա�����汾
	ostream& operator<<(ostream& cout, const CGirl& g);

	void printCGirl();
}
