#include <iostream>
#include <vector>
using namespace std;

/*
是11_c的第三版本，map有两个不足：map中key有唯一性、自动按key排序；
用vector存放pair键值对可完美解决上述两问题；
*/
int main()
{
    string str;
    cin >> str;
    int i, t;
    char c;
    vector <pair<char,int> >vec;    //vector中存放pair键值对，一定要主要'> >'有空格，否则当成'>>'
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            c = str[i];
            if((str[i+1]>='a' && str[i+1]<='z') || str[i+1]=='\0')     //如果下一个不是字符而是数字，即当前字符就出现一次，立即push;或者这是字符串最后一位，也立即push
                vec.push_back(make_pair<char,int>(c,1));    //vector存放pair要用到make_pair，要注意其写法
            t = 0;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            t = t*10 + str[i] -'0';
            if((str[i+1]>='a' && str[i+1]<='z') || str[i+1]=='\0') //原理同上；若a12，则<a,1><a,12>，不应该这样，出现第一个数后不能马上push
                vec.push_back((make_pair<char,int>(c,t)));
        }
    }
    vector <pair<char,int> >::iterator it;  //声明迭代器，类似指针，同map
    it = vec.begin();
    for(it=vec.begin(); it != vec.end(); it++)
    {
        for(i=0; i<it->second; i++)
        {
            cout << it->first;
        }
    }

    return 0;
}
