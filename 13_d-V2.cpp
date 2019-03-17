#include <iostream>
#include <sstream>  //����ת�ַ�����
#include <cstdlib>  //strtol��itoa�õ�
#include <cstring>  //strcpy��c�⺯���еġ�
using namespace std;

/*
���ú�������ת����strtol-����ת10��itoa-10ת�������ο���https://blog.csdn.net/vir_lee/article/details/80645066
����ַ��������ֵĻ�ת
*/
string num2str(int n)       //�Զ�������ת�ַ����ĺ�������ת��09_c
{

    string s;
    ostringstream oss;      //����һ������ַ�������������Ϊ��
    oss << n;               //������ַ����������int����i������
    s = oss.str();          //�����ַ�������str������ȡ���е�����
    return s;
}


void _2to10(string str)
{
    char s[20];
    strcpy(s, str.c_str());         //C�ַ�������ֱ�Ӹ�ֵ��string���󣬶���֮���ɣ������string��ĳ�Ա����c_str()��strcpy(s1, s2)��ֵ���߸�ǰ��
    char *stop;                     //�Ƿ��ַ��ḳֵ����
    int num = strtol(s, &stop, 2);  //strtol��c�еģ�str��������c�����ַ�����c++��string���󲻿�
    cout << num << endl;
}

void _10to2(int num)
{
    char s[20];
    itoa(num, s, 2);    //num��ԭ��s�ǽ����2��Ŀ�����
    cout << s << endl;
}

int main()
{
    int num, jz;
    while(cin >> num >> jz)
    {
        if(num==0 && jz==0)
            break;
        if(jz == 10)
            _10to2(num);
        if(jz == 2)
        {
             string str = num2str(num);//
            _2to10(str);
        }
    }
    return 0;
}

