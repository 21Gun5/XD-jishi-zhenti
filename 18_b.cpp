#include <iostream>
using namespace std;
/*
难点在于lcs函数，生写逻辑不好理，暂记住
*/

int lcs(string str1, string str2)  //lcs即最长公共子序列缩写，此函数连续且相同字符的最大个数，记住此算法2-for-1-if
{
    int arr[20][20] = {0};      //辅助用
    int Max = 0;    //相同且连续的最大个数
    for(int i=0; i<str1.size(); i++)
    {
        for(int j=0; j<str2.size(); j++)
        {
            if(str1[i] == str2[j])
            {
                arr[i+1][j+1] = arr[i][j] + 1;  //特别注意是i+1和j+1
                Max = Max>arr[i+1][j+1]?Max:arr[i+1][j+1];
            }
        }
    }
    return Max;
}

int main()
{
    string str1, str2;
    getline(cin, str1);     //string类的getline函数；可有第三个参数char c，其为终结符；默认是回车；
    getline(cin , str2);    //可用于输入有空格的字符串，用cin>>的话，空格就断开了

    int len1 = str1.size();     //.length()和.size()用于string类对象；strlen(str)用于字符数组的的字符串
    int len2 = str2.size();

    for(int i=0; i<len1; i++)       //因为不区分大小写，故全转为大/小写，再去匹配
        str1[i] = tolower(str1[i]);
    for(int i=0; i<len2; i++)
        str2[i] = tolower(str2[i]);
    int Max = lcs(str1,str2);
    cout << (Max*2.0) / (len1+len2) << endl;    //要/2.0，不可/2；因为1/2=0，1/2.0=0.5
    return 0;
}
