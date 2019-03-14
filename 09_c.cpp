#include <iostream>
#include <sstream>      //�ַ���ת��������
using namespace std;

int str2num(string s)       //�Զ����ַ���ת���ֵĺ�������תͬ��
{
    int num;
    stringstream ss(s);
    ss >> num;
    return num;
}

int find_yz(int n)      //�Զ���������������ӵĺ��������ܶ���������ʹ����������
{
    int yz;
    for(int i = 1; i < n; i++)      //��Ҫ˼ά���ƻ�ϰ��ʹȻ��i=1����0
    {
        if(n%i == 0)        //��������������ز������������'/'��'%'
            yz = i;
    }
    if(yz == 1)     //Ϊ��������������������Ӽ�����
        yz = n;
    return yz;
}

int main()
{
    int n, i;
    cin >> n;
    for(n; n > 0; n--)
    {
        string str, num_str = "";       //�ַ���-˫���ţ��ַ�-�����ţ�������ʼ��Ϊ�գ�Ĭ�Ͼ��ǿմ�
        int num;
        cin >> str;
        for(i = 0; i < str.size(); i++)
        {
//            if((int)str[i] >= 48 && (int)str[i] <= 57)      //ASCII����ַ���ֱ����int()��char()��ת����char(48)��int('0'); 48-57,75-90,97-122
            if(str[i] >= '0' && str[i] <= '9')        //�����鷳���ܼ����
                num_str += str[i];
        }
        if(num_str == "")       //��Ҫ��©������������ַ����������֣���Ϊ0���ַ���-˫���ţ��ַ�-������
            num = 0;
        else
            num = str2num(num_str);
        cout << num << endl;
//        cout << find_yz(num) << endl;
    }
    return 0;
}
