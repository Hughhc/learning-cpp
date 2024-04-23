#include "operator-overloading.h"

//operator_overloading::CGirl::CGirl()
//{
//	m_name = "西施";
//	m_xw = 87;
//	m_score = 30;
//}

// 下标运算符重载 构造函数
operator_overloading::CGirl::CGirl()
{
	m_boys[0] = "子都";
	m_boys[1] = "潘安";
	m_boys[2] = "宋玉"; 
}

//void operator_overloading::CGirl::show()
//{
//	cout << "姓名：" << m_name << "，胸围：" << m_xw << "，评分：" << m_score << endl;
//}

// 下标运算符重载
void operator_overloading::CGirl::show()
{ 
	cout << m_boys[0] << "、" << m_boys[1] << "、" << m_boys[2] << endl;
}

//// 给超女加分的函数 同一个运算符的重载函数，只能在成员和非成员函数版本中二选一
////void operator_overloading::addscore(operator_overloading::CGirl& g, int score)
//operator_overloading::CGirl& operator_overloading::operator+(int score, operator_overloading::CGirl& g)
//{
//	g.m_score = g.m_score + score;
//	return g;
//}
//
//operator_overloading::CGirl& operator_overloading::operator+(operator_overloading::CGirl& g1, operator_overloading::CGirl& g2)
//{
//	g1.m_score = g1.m_score + g2.m_score;
//	return g1;
//}
//
//operator_overloading::CGirl& operator_overloading::operator+(operator_overloading::CGirl& g, int score)
//{
//	g.m_score = g.m_score + score;
//	return g;
//}

//// 给超女加分的函数
//operator_overloading::CGirl& operator_overloading::CGirl::operator+(int score)
//{
//	m_score = m_score + score;
//	return *this;
//}

//// 给超女减分的函数
//operator_overloading::CGirl& operator_overloading::operator-(operator_overloading::CGirl& g, int score)
//{
//	g.m_score = g.m_score - score;
//	return g;
//}

//// 左移运算符重载
//ostream& operator_overloading::operator<<(ostream& cout, const operator_overloading::CGirl& g)
//{
//	cout << "姓名：" << g.m_name << "，胸围：" << g.m_xw << "，评分：" << g.m_score;
//	return cout;
//}

// 下标运算符重载
string& operator_overloading::CGirl::operator[](int ii)
{
	return m_boys[ii];
}

const string& operator_overloading::CGirl::operator[](int ii) const
{
	return m_boys[ii];
}


void operator_overloading::printCGirl()
{
	//// 导演的要求：每轮表演之后，给超女加上她的得分
	//CGirl g;

	//// 给超女加分的函数。
	//g = g + 30;
	////addscore(g, 30);
	////operator+(g, 30);
	////g + 30;
	//g.show();

	//g = 10 + g;
	//g.show();

	//g = g + g;
	//g.show();

	//g = g - 20 - 10; // 重载函数参数列表中的顺序决定了操作数的位置
	////g = 20 - 10 - g;
	//g.show();

	//// 左移运算符重载
	//cout << g << endl;

	// 下标运算符重载 下标运算符必须以成员函数的形式进行重载
	CGirl g;
	g[1] = "王麻子";
	cout << "第1任男朋友：" << g[1] << endl;
	g.show();

	const CGirl g1 = g;
	cout << "第1任男朋友：" << g1[1] << endl;
}
