#include <iostream>
#include <sstream>  //数字转字符串用
#include <cstdlib>  //strtol和itoa用到
#include <cstring>  //strcpy是c库函数中的。
using namespace std;

/*
利用函数进行转换：strtol-其他转10、itoa-10转其他。参考：https://blog.csdn.net/vir_lee/article/details/80645066
结合字符串与数字的互转
*/
string num2str(int n)       //自定义数字转字符串的函数，逆转看09_c
{

    string s;
    ostringstream oss;      //构造一个输出字符串流，流内容为空
    oss << n;               //向输出字符串流中输出int整数i的内容
    s = oss.str();          //利用字符串流的str函数获取流中的内容
    return s;
}


void _2to10(string str)
{
    char s[20];
    strcpy(s, str.c_str());         //C字符串可以直接赋值给string对象，而反之不可，需借助string类的成员函数c_str()和strcpy(s1, s2)赋值后者给前者
    char *stop;                     //非法字符会赋值给他
    int num = strtol(s, &stop, 2);  //strtol是c中的，str参数需是c风格的字符串，c++的string对象不可
    cout << num << endl;
}

void _10to2(int num)
{
    char s[20];
    itoa(num, s, 2);    //num是原，s是结果，2是目标进制
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

