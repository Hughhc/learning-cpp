#pragma once

#include <iostream>

using namespace std;

namespace class_inherits
{
    class CAllComers          // 海选报名者类
    {
    public:
        string    m_name;    // 姓名
        string    m_tel;         // 联系电话
    protected:
        int m_a;
    private:
        int m_b;

    public:
        // 构造函数。
        CAllComers();
        // 报名时需要唱一首歌。
        void sing();
        // 设置姓名。
        void setname(const string& name);
        // 设置电话号码。
        void settel(const string& tel);
    };

    //  m_name、m_tel、m_a将成为超女类的私有成员，m_b在超女类中看不见
    class CGirl :private CAllComers        // 超女类
    {
    public:
        int m_bh;          // 编号。
        CGirl();
        void show();
    };

    void printCGirl();
}
