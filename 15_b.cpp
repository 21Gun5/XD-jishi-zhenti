#include <iostream>
#include <map>
using namespace std;
/*
�ۣ�map��ֱ�ǳ��ִ�������������������13_b
map����÷���ת13_b����ע��
*/
int main()
{
    int i;
    string str;
    cin >> str;
    map <char,int> mymap;
    for(i=0; i<str.size(); i++)
    {
        if(mymap.find(str[i]) != mymap.end())
            mymap[str[i]] += 1;
        else
            mymap[str[i]] = 1;
    }
    map <char,int>::iterator it;
    it = mymap.begin();
    while(it != mymap.end())
    {
        if(it->second == 1)
            cout << it->first;
        else
            cout << it->second << it->first;
        it+