#include <iostream>
#include <vector>
using namespace std;

/*
��11_c�ĵ����汾��map���������㣺map��key��Ψһ�ԡ��Զ���key����
��vector���pair��ֵ�Կ�����������������⣻
*/
int main()
{
    string str;
    cin >> str;
    int i, t;
    char c;
    vector <pair<char,int> >vec;    //vector�д��pair��ֵ�ԣ�һ��Ҫ��Ҫ'> >'�пո񣬷��򵱳�'>>'
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            c = str[i];
            if((str[i+1]>='a' && str[i+1]<='z') || str[i+1]=='\0')     //�����һ�������ַ��������֣�����ǰ�ַ��ͳ���һ�Σ�����push;���������ַ������һλ��Ҳ����push
                vec.push_back(make_pair<char,int>(c,1));    //vector���pairҪ�õ�make_pair��Ҫע����д��
            t = 0;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            t = t*10 + str[i] -'0';
            if((str[i+1]>='a' && str[i+1]<='z') || str[i+1]=='\0') //ԭ��ͬ�ϣ���a12����<a,1><a,12>����Ӧ�����������ֵ�һ������������push
                vec.push_back((make_pair<char,int>(c,t)));
        }
    }
    vector <pair<char,int> >::iterator it;  //����������������ָ�룬ͬmap
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
