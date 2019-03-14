#include <iostream>
using namespace std;

int main()
{
/*
很重要的手法：n表次数，c表当前字符；将其另赋值为变量便于操作
注意程序的流程，先动手写，再动手敲
*/
    int i, n = 0 ;
    char c;
    string str;
    cin >> str;
    for(i=0; i<str.size(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            while(n > 1)   //n变量的意义便是次数，直接用while，就不用if+for了；
            {
                cout << c;       //把上一个字母打印出来
                n--;
            }
            c = str[i];     //把当前字符赋值给另一变量
            cout << c;     //打印当前字母
            n = 0;      //重新把打印次数设置为0；
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            n = n*10 + str[i] - '0';       //(int)str[i]并不是把字符转为数字，而是求其ASCII，莫与py混淆；
                                            // -'0'表示-0的ASCII，从而转为数字，如‘3’ - ‘0’ 对应的ASCLL码就是 51-48 ,结果是3
        }
    }
    while(n > 1)        //若最后为数字，还要打印上一个字母。如a2b3，若无此，则aab，有此，则aabbb；
    {
        cout << c;
        n--;
    }
/*
c++可以如此操作字符串：直接用string定义、cin/cout直接输入/输出、size得长度、for遍历每一字符
    cout << str;
    for(i=0; i<str.size(); i++)
    {
        cout << str[i] << endl;
    }
*/

}
