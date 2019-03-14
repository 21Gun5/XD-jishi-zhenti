#include <iostream>
#include <sstream>      //字符串转数字所用
using namespace std;

int str2num(string s)       //自定义字符串转数字的函数，反转同理
{
    int num;
    stringstream ss(s);
    ss >> num;
    return num;
}

int find_yz(int n)      //自定义找整数最大因子的函数；功能独立，尽量使代码清晰；
{
    int yz;
    for(int i = 1; i < n; i++)      //不要思维定势或习惯使然，i=1而非0
    {
        if(n%i == 0)        //找因数等数字相关操作，灵活运用'/'和'%'
            yz = i;
    }
    if(yz == 1)     //为素数（质数），最大因子即本身
        yz = n;
    return yz;
}

int main()
{
    int n, i;
    cin >> n;
    for(n; n > 0; n--)
    {
        string str, num_str = "";       //字符串-双引号，字符-单引号；若不初始化为空，默认就是空串
        int num;
        cin >> str;
        for(i = 0; i < str.size(); i++)
        {
//            if((int)str[i] >= 48 && (int)str[i] <= 57)      //ASCII码和字符可直接用int()、char()来转，如char(48)、int('0'); 48-57,75-90,97-122
            if(str[i] >= '0' && str[i] <= '9')        //上述麻烦，能简则简
                num_str += str[i];
        }
        if(num_str == "")       //不要遗漏这种情况，若字符串中无数字，则为0；字符串-双引号，字符-单引号
            num = 0;
        else
            num = str2num(num_str);
        cout << num << endl;
//        cout << find_yz(num) << endl;
    }
    return 0;
}
