#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

/*
C++中进制转换相关函数：strtol-其他转10、itoa-10转其他、cout利用控制符dec、hex和oct仅仅是改变显示格式；
两个转换的函数都会涉及字符串与数字的转换；故不用函数，从数学角度考虑，自己写方法；
*/

using namespace std;

string num2str(int n)       //自定义数字转字符串的函数，逆转看09_c
{

    string s;
    ostringstream oss;  ////构造一个输出字符串流，流内容为空
    oss << n;     //向输出字符串流中输出int整数i的内容
    s = oss.str();  //利用字符串流的str函数获取流中的内容
    return s;
}

void _10to2(int num)
{//十进制整数转二进制整数：除二取余，余数逆序；（若是小数：乘二取整，顺序排列
    vector <int> ys;    //余数存放在vector中
    if(num == 0)    //若是0，直接打印，其二、十进制同
        cout << num << endl;
    else
    {
        while(num)  //num/2=0时便停止，如1/2=0余1
        {
            ys.push_back(num%2);
            num = num / 2;  //num/2取整作为新num
        }
        for(int i=ys.size(); i>0; i--)  //逆序输出，与正序对比记忆，很好推不必死记
        {
            cout << ys[i-1];     //直接打印出来方便，若return会麻烦，故函数前void而非int
        }
        cout << endl;
    }
}

void _2to10(string str)
{//二进制转十进制，1010=2^3+2^1=10
    int num = 0;
    int len = str.size();
    for(int i=len; i>0; i--)
    {
        if(str[i-1] == '1')
            num = num + pow(2,len-i);//pow计算x的y次幂，位于cmath，注意len-i，便利的i与幂数之和是size
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
