#pragma once

#include <iostream>

using namespace std;

namespace class_polymorphism
{
    class CAllComers 
    {
    public:
        int  m_bh = 0;             // ��š�
        virtual void show();
        virtual void show(int a);
    };

    class CGirl :public CAllComers 
    {
    public:
        int m_age = 0;           // ���䡣
        void show();
        void show(int a);
    };

    void print();
}
