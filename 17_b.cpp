#include <iostream>
using namespace std;

/*
find�������ַ��������ִ�Сд��
toupper��tolower���д�Сдת���������ַ�ת��
*/
int main()
{
    string str;     //Ҫ���ַ���
    int flag, n, i, j;
    cin >> str >> flag >> n;
    for(i=0; i<n; i++)
    {
        string strx;    //�Ӵ��ַ�������
        cin >> strx;
//        cout << str << endl <<strx << flag;
        if(flag == 1)        //��Сд����
        {
            if(strx.find(str) != -1)     //find���������ڷ������ַ��������ִ�Сд���Ҳ�������-1���ҵ������±ꣻ
                cout << strx << endl;
        }
        if(flag == 0)       //�����ִ�Сд
        {
            for(j=0; j<str.size(); j++)     //�����ѭ��������Ҫһ��������i��j�������������Ĵ��󣬲��е�ѭ������һ����������j
                str[j] = tolower(str[j]);   //tolower��toupper�ɵ����ַ����д�Сдת������������find���д�Сд�����еĲ��ң�
            for(j=0; j< strx.size(); j++)
                strx[j] = tolower(strx[j]);
            if(strx.find(str) != -1)
                cout << strx << endl;
        }
    }
    return 0;
}
