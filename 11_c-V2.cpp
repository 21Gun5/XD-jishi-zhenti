#include <iostream>
#include <map>
#include <sstream>  //ostringstream�õ�����ɽ��ַ����ַ�������������������ʵ��a1��a2��Ч��
using namespace std;
/*
��11_c�ĵڶ��汾����map���˺ö��߼���
�ٴ�֤��map�Ǵ������������13_b��15_b�ٵ����⣻
//�ðɣ�����û˵��������map���У����Զ���key���򣬺�����ӡʱ�޷�ʵ����ĿҪ���䣬Ѱ��v3
*/
int main()
{
    int i, t;
    string c;
    map <string,int> mymap; //map�ļ�����Ϊ�ַ�������
    ostringstream oss;
    int ci;
    string str;
    cin >> str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            oss.str("");    //Ҫ��������ݣ�����a5b�����������oss=a����<<���oss=ab
            ci = 1;     //���½�ci��Ϊ1��
            c = str[i];     //����һ�������������ɼ򻯺ö������������ô�򻯣������壬���ĸ���
            if(mymap.find(c) != mymap.end())
            {
                oss << c << ci;
                ci++;
            }
            else
                oss << c;
            mymap[oss.str()] = 1;      //���ַ�ʽ���漰���ϵ�Ψһ�ԣ����ܴ���������ͬ�����ļ�ֵ�ԣ�
                                                    //���Ѵ��ڼ���[]���Ḳ�ǣ�insert�����ʧ�ܣ�������Ψһ�Ե����ƣ���ô�����
                                                    //����a1��a2�����������������������ַ������ֵ����ӣ���ostringstream��λ��sstream
            t = 0;      //Ҳ�е㸨����������˼
        }
        if(str[i]>='1' && str[i]<='9')
        {
            t = t*10 + str[i] - '0';    //���ڴ���ͳ�Ƶ��ַ�����1��12��123��λ����-'0'��ʾ-0��ASCII���Ӷ�תΪ����
            mymap[oss.str()] = t;
        }
    }
    map <string,int>::iterator it;
    it = mymap.begin();
    while(it != mymap.end())
    {
        cout << it->first << it->second;//map�Զ���key���򣬱���ʱ��������⣬��aba������aa11ba������a1b1a11
                                        //�ڶ��汾���ڴˣ�
//        for(i=0; i<it->second; i++)
//        {
//            cout << it->first[0];
//        }
        it++;
    }
    return 0;
}
