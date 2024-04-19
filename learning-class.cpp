#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable : 6031)

#include "learning-class.h"

//struct st_girl    // 超女基本信息结构体st_girl，存放了超女全部的数据项。
//{
//	string name;    // 姓名
//	int    age;     // 年龄
//	int    height;  // 身高（cm）
//	double weight;  // 体重（kg）
//	char   sex;     // 性别：X-女；Y-男
//	int    yz;      // 颜值：1-漂亮；2-一般；3-歪瓜裂枣
//	string special; // 特长
//	string memo;    // 备注
//};
//
//void setValue(Stgirl& girl, string name, int age, int height, double weight, char sex, 
//	int yz, string special, string memo)
//{
//	girl.name = name;
//	girl.age = age;
//	girl.height = height;
//	girl.weight = weight;
//	girl.sex = sex;
//	girl.yz = yz;
//	girl.special = special;
//	girl.memo = memo;
//}
//
//void show(const Stgirl& girl)
//{
//	cout << "姓名："   << girl.name    << "，年龄：" << girl.age  << "，身高：" << girl.height
//		 << "，体重：" << girl.weight  << "，性别：" << girl.sex  << "，颜值：" << girl.yz
//		 << "，特长：" << girl.special << "，备注：" << girl.memo << endl;
//}

//struct st_girl      // 超女基本信息结构体st_girl，存放了超女全部的数据项。
//{
//	string name;    // 姓名
//	int    age;     // 年龄
//
//	void setValue(string name1, int age1) // 设置成员变量的值
//	{
//		name = name1;
//		age = age1;
//	}
//
//	void show() // 显示成员变量的值
//	{
//		cout << "姓名：" << name << "，年龄：" << age << endl;
//	}
//};

// 在类的声明中定义的函数都将自动成为内联函数；在类的声明之外定义的函数如果使用了inline限定符，也是内联函数
class cl_girl      // 超女基本信息类Cgirl
{
public:
	//string name;      // 姓名
	//int    age = 20;  // 年龄

	// 为了区分类的成员变量和成员函数的形参，把成员变量名加m_前缀或_后缀，如m_name或name_
	string m_name;      // 姓名
	int    m_age = 20;  // 年龄

	void initData()
	{
		m_name.clear();
		m_age = 0;
	}
	int getage()     // 获取超女年龄属性的方法
	{
		return m_age;
	}
	void setage(int age) // 设置超女年龄属性的方法
	{
		m_age = age;
	}
	void clearData()
	{
		initData();
	}
	//int count = 0;   // 递归次数
	//enum { girl = 1, boy = 2 };
	//int sex;         // 性别：1-女；2-男
	
	//void setValue(string name1, int age1) // 设置成员变量的值
	//{
	//	name = name1;
	//	age = age1;
	//}
	void setValue(string name, int age);

	void show() // 显示成员变量的值
	{
		//if (++count > 10) return;   // 终止条件
		cout << "姓名：" << m_name << "，年龄：" << m_age << endl;
		//show();
		//if (sex==girl) cout << sex << endl;
	}
};

//void cl_girl::setValue(string name1, int age1)      // 设置成员变量的值
inline void cl_girl::setValue(string name, int age) // 设置为内联函数
{
	m_name = name;
	m_age = age;
	//show();
}

void printStgirl()
{
	//Stgirl girl = {};
	cl_girl girl;
	
	//girl.name = "西施";
	//girl.special = "琴棋书画";
	//girl.memo = "四大美女之一";
	//setValue(girl, "西施", 18, 170, 45.0, 'X', 1, "琴棋书画", "四大美女之一");
	girl.setValue("西施", 18);

	//cout << "姓名："   << girl.name    << "，年龄：" << girl.age  << "，身高：" << girl.height
	//	 << "，体重：" << girl.weight  << "，性别：" << girl.sex  << "，颜值：" << girl.yz 
	//	 << "，特长：" << girl.special << "，备注：" << girl.memo << endl;
	//show(girl);
	girl.show();
	//girl.sex = girl.boy;
	//girl.age = 18;
}
