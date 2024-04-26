#include "structure-and-destruction.h"

//class Cgirl
//{
//public:
//	string m_name;      // 姓名
//	int    m_age;       // 年龄
//	char   m_memo[301]; // 备注
//
//	//     不建议在构造/析构函数中写太多的代码，可以调用成员函数
//	// 构造函数 除了初始化，不建议让构造函数做太多工作（做只能成功不会失败的）
//	Cgirl()  
//	{
//		//m_name.clear();
//		//m_age = 0;
//		//memset(m_memo, 0, sizeof(m_memo));
//		initdata();
//		cout << "调用了Cgirl构造函数" << endl;
//	}
//	Cgirl(string name)
//	{
//		//m_name.clear();
//		//m_age = 0;
//		//memset(m_memo, 0, sizeof(m_memo));
//		initdata();
//		cout << "调用了Cgirl(name)构造函数" << endl;
//		//Cgirl(); // 创建一个匿名对象（临时对象），并不是调用构造函数 临时对象：没有名字，创建后马上销毁
//		m_name = name;
//	}
//	Cgirl(int age)
//	{
//		//m_name.clear();
//		//m_age = 0;
//		//memset(m_memo, 0, sizeof(m_memo));
//		initdata();
//		cout << "调用了Cgirl(age)构造函数" << endl;
//		//Cgirl(); // 创建一个匿名对象（临时对象），并不是调用构造函数 临时对象：没有名字，创建后马上销毁
//		m_age = age;
//	}
//	Cgirl(string name,int age)
//	{
//		//m_name.clear();
//		//m_age = 0;
//		//memset(m_memo, 0, sizeof(m_memo));
//		initdata();
//		cout << "调用了Cgirl(name, age)构造函数" << endl;
//		// Cgirl(); // 如果成员函数有指针，没有调用构造函数，指针没有初始化并且其他地方没有分配就成为野指针。在析构函数中进行Delete指针，程序会崩溃
//		m_name = name;
//		m_age = age;
//	}
//	void initdata()
//	{
//		m_name.clear();
//		m_age = 0;
//		memset(m_memo, 0, sizeof(m_memo));
//	}
//	// 析构函数
//	~Cgirl()
//	{
//		cout << "调用了~Cgirl()\n";
//	}
//
//	//void setValue(string name, int age) // 设置成员变量	
//	//{
//	//	m_name = name;
//	//	m_age = age;
//	//}
//
//	void show() // 显示成员变量
//	{
//		cout << "姓名：" << m_name << "，年龄：" << m_age << "，备注：" << m_memo << endl;
//	}
//};

structure_and_destruction::CGirl::CGirl()
{
	initdata();
	cout << "调用了CGirl构造函数" << endl;
}

structure_and_destruction::CGirl::CGirl(string name)
{
	initdata();
	cout << "调用了CGirl(name)构造函数" << endl;
	m_name = name;
}

structure_and_destruction::CGirl::CGirl(int age)
{
	initdata();
	cout << "调用了CGirl(age)构造函数" << endl;
	m_age = age;
}

structure_and_destruction::CGirl::CGirl(string name, int age)
{
	initdata();
	cout << "调用了CGirl(name, age)构造函数" << endl;
	m_name = name;
	m_age = age;
}

void structure_and_destruction::CGirl::initdata()
{
	m_name.clear();
	m_age = 0;
	memset(m_memo, 0, sizeof(m_memo));
}

structure_and_destruction::CGirl::~CGirl()
{
	cout << "调用了~CGirl()\n";
}

void structure_and_destruction::CGirl::show()
{
	cout << "姓名：" << m_name << "，年龄：" << m_age << "，备注：" << m_memo << endl;
}

void structure_and_destruction::print()
{
	// 隐式调用构造函数
	//Cgirl girl;            // 创建对象，不设置初始值
	//Cgirl girl("西施");    // 创建对象，设置姓名
	//Cgirl girl("西施", 18);  // 创建对象，设置姓名和年龄

	// 在构造函数名后面加括号和参数不是调用构造函数，是创建匿名对象
	// 用匿名函数创建对象,显示调用构造函数
	//Cgirl girl=Cgirl();            // 创建对象，不设置初始值
	//Cgirl girl=Cgirl("西施");    // 创建对象，设置姓名
	//Cgirl girl=Cgirl("西施", 18);  // 创建对象，设置姓名和年龄
	//Cgirl girl = 18; // 使用赋值语法初始化对象
	//Cgirl girl;
	//girl = Cgirl("西施", 18);
	//Cgirl* girl=new Cgirl;            // 创建对象，不设置初始值
	//Cgirl* girl=new Cgirl("西施");    // 创建对象，设置姓名
	CGirl* girl=new CGirl("西施", 18);  // 创建对象，设置姓名和年龄

	girl->show();
	delete girl;
	//girl.~Cgirl();
}
