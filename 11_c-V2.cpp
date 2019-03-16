#include <iostream>
#include <map>
#include <sstream>  //ostringstream用到，其可将字符或字符串与数字相连，进而实现a1、a2的效果
using namespace std;
/*
是11_c的第二版本，用map简化了好多逻辑；
再次证明map是次数相关利器，13_b到15_b再到本题；
//好吧，算我没说，本题用map不行，其自动依key排序，后续打印时无法实现题目要求。卒，寻求v3
*/
int main()
{
    int i, t;
    string c;
    map <string,int> mymap; //map的键可以为字符串类型
    ostringstream oss;
    int ci;
    string str;
    cin >> str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            oss.str("");    //要清楚脏数据！（如a5b，若不清楚，oss=a，再<<后变oss=ab
            ci = 1;     //重新将ci置为1；
            c = str[i];     //设置一个辅助变量，可简化好多操作，至于怎么简化，讲不清，用心感受
            if(mymap.find(c) != mymap.end())
            {
                oss << c << ci;
                ci++;
            }
            else
                oss << c;
            mymap[oss.str()] = 1;      //两种方式都涉及集合的唯一性，不能存在两个相同键名的键值对；
                                                    //若已存在键，[]法会覆盖，insert会插入失败，但都有唯一性的限制，怎么解决？
                                                    //利用a1、a2的命名，避免重名，其中字符与数字的连接，用ostringstream，位于sstream
            t = 0;      //也有点辅助变量的意思
        }
        if(str[i]>='1' && str[i]<='9')
        {
            t = t*10 + str[i] - '0';    //用于次数统计的手法，可1，12，123多位数；-'0'表示-0的ASCII，从而转为数字
            mymap[oss.str()] = t;
        }
    }
    map <string,int>::iterator it;
    it = mymap.begin();
    while(it != mymap.end())
    {
        cout << it->first << it->second;//map自动依key排序，遍历时会出现问题，如aba，导致aa11ba，而非a1b1a11
                                        //第二版本卒于此！
//        for(i=0; i<it->second; i++)
//        {
//            cout << it->first[0];
//        }
        it++;
    }
    return 0;
}
