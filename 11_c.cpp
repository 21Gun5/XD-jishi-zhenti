#include <iostream>
using namespace std;

int main()
{
/*
����Ҫ���ַ���n�������c��ǰ�ַ���������ֵΪ�������ڲ���
ע���������̣��ȶ���д���ٶ�����
*/
    int i, n = 0 ;
    char c;
    string str;
    cin >> str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            while(n > 1)   //n������������Ǵ�����ֱ����while���Ͳ���if+for�ˣ�
            {
                cout << c;       //����һ����ĸ��ӡ����
                n--;
            }
            c = str[i];     //�ѵ�ǰ�ַ���ֵ����һ����
            cout << c;     //��ӡ��ǰ��ĸ
            n = 0;      //���°Ѵ�ӡ��������Ϊ0��
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            n = n*10 + str[i] - '0';       //(int)str[i]�����ǰ��ַ�תΪ���֣���������ASCII��Ī��py������
                                            // -'0'��ʾ-0��ASCII���Ӷ�תΪ���֣��确3�� - ��0�� ��Ӧ��ASCLL����� 51-48 ,�����3
        }
    }
    while(n > 1)        //�����Ϊ���֣���Ҫ��ӡ��һ����ĸ����a2b3�����޴ˣ���aab���дˣ���aabbb��
    {
        cout << c;
        n--;
    }
/*
c++������˲����ַ�����ֱ����string���塢cin/coutֱ������/�����size�ó��ȡ�for����ÿһ�ַ�
    cout << str;
    for(i=0; i<str.size(); i++)
    {
        cout << str[i] << endl;
    }
*/

}
