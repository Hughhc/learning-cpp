#pragma once

#include <iostream>

using namespace std;

namespace class_inherits
{
    class CAllComers          // ��ѡ��������
    {
    public:
        string    m_name;    // ����
        string    m_tel;         // ��ϵ�绰
    protected:
        int m_a;
    private:
        int m_b;

    public:
        // ���캯����
        CAllComers();
        // ����ʱ��Ҫ��һ�׸衣
        void sing();
        // ����������
        void setname(const string& name);
        // ���õ绰���롣
        void settel(const string& tel);
    };

    //  m_name��m_tel��m_a����Ϊ��Ů���˽�г�Ա��m_b�ڳ�Ů���п�����
    class CGirl :private CAllComers        // ��Ů��
    {
    public:
        int m_bh;          // ��š�
        CGirl();
        void show();
    };

    void printCGirl();
}
