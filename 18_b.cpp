#include <iostream>
using namespace std;
/*
�ѵ�����lcs��������д�߼��������ݼ�ס
*/

int lcs(string str1, string str2)  //lcs���������������д���˺�����������ͬ�ַ�������������ס���㷨2-for-1-if
{
    int arr[20][20] = {0};      //������
    int Max = 0;    //��ͬ��������������
    for(int i=0; i<str1.size(); i++)
    {
        for(int j=0; j<str2.size(); j++)
        {
            if(str1[i] == str2[j])
            {
                arr[i+1][j+1] = arr[i][j] + 1;  //�ر�ע����i+1��j+1
                Max = Max>arr[i+1][j+1]?Max:arr[i+1][j+1];
            }
        }
    }
    return Max;
}

int main()
{
    string str1, str2;
    getline(cin, str1);     //string���getline���������е���������char c����Ϊ�ս����Ĭ���ǻس���
    getline(cin , str2);    //�����������пո���ַ�������cin>>�Ļ����ո�ͶϿ���

    int len1 = str1.size();     //.length()��.size()����string�����strlen(str)�����ַ�����ĵ��ַ���
    int len2 = str2.size();

    for(int i=0; i<len1; i++)       //��Ϊ�����ִ�Сд����ȫתΪ��/Сд����ȥƥ��
        str1[i] = tolower(str1[i]);
    for(int i=0; i<len2; i++)
        str2[i] = tolower(str2[i]);
    int Max = lcs(str1,str2);
    cout << (Max*2.0) / (len1+len2) << endl;    //Ҫ/2.0������/2����Ϊ1/2=0��1/2.0=0.5
    return 0;
}
