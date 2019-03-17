#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

/*
C++�н���ת����غ�����strtol-����ת10��itoa-10ת������cout���ÿ��Ʒ�dec��hex��oct�����Ǹı���ʾ��ʽ��
����ת���ĺ��������漰�ַ��������ֵ�ת�����ʲ��ú���������ѧ�Ƕȿ��ǣ��Լ�д������
*/

using namespace std;

string num2str(int n)       //�Զ�������ת�ַ����ĺ�������ת��09_c
{

    string s;
    ostringstream oss;  ////����һ������ַ�������������Ϊ��
    oss << n;     //������ַ����������int����i������
    s = oss.str();  //�����ַ�������str������ȡ���е�����
    return s;
}

void _10to2(int num)
{//ʮ��������ת����������������ȡ�࣬�������򣻣�����С�����˶�ȡ����˳������
    vector <int> ys;    //���������vector��
    if(num == 0)    //����0��ֱ�Ӵ�ӡ�������ʮ����ͬ
        cout << num << endl;
    else
    {
        while(num)  //num/2=0ʱ��ֹͣ����1/2=0��1
        {
            ys.push_back(num%2);
            num = num / 2;  //num/2ȡ����Ϊ��num
        }
        for(int i=ys.size(); i>0; i--)  //���������������Աȼ��䣬�ܺ��Ʋ�������
        {
            cout << ys[i-1];     //ֱ�Ӵ�ӡ�������㣬��return���鷳���ʺ���ǰvoid����int
        }
        cout << endl;
    }
}

void _2to10(string str)
{//������תʮ���ƣ�1010=2^3+2^1=10
    int num = 0;
    int len = str.size();
    for(int i=len; i>0; i--)
    {
        if(str[i-1] == '1')
            num = num + pow(2,len-i);//pow����x��y���ݣ�λ��cmath��ע��len-i��������i������֮����size
    }
    cout << num << endl;
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
             string str = num2str(num);
            _2to10(str);
        }
    }
    return 0;
}
