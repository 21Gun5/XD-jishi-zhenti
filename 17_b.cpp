#include <iostream>
using namespace std;

/*
find查找子字符串，区分大小写；
toupper和tolower进行大小写转化，单个字符转；
*/
int main()
{
    string str;     //要找字符串
    int flag, n, i, j;
    cin >> str >> flag >> n;
    for(i=0; i<n; i++)
    {
        string strx;    //从此字符串里找
        cin >> strx;
//        cout << str << endl <<strx << flag;
        if(flag == 1)        //大小写敏感
        {
            if(strx.find(str) != -1)     //find函数可用于发现子字符串，区分大小写，找不到返回-1，找到返回下标；
                cout << strx << endl;
        }
        if(flag == 0)       //不区分大小写
        {
            for(j=0; j<str.size(); j++)     //内外层循环变量不要一样，如外i内j，否则出现意外的错误，并列的循环可用一个，如两个j
                str[j] = tolower(str[j]);   //tolower、toupper可单个字符进行大小写转化，进而利用find进行大小写不敏感的查找；
            for(j=0; j< strx.size(); j++)
                strx[j] = tolower(strx[j]);
            if(strx.find(str) != -1)
                cout << strx << endl;
        }
    }
    return 0;
}
