#include <iostream>
using namespace std;

int main()
{
    int num, score = 0, tmp = 2;    //˼�룺����һ�����ƿ��صı�������xxʱ������yyʱ��
    while(cin >> num)
    {
        if(num == 1)
        {
            score++;
            tmp = 2;
        }
        else if(num == 2)
        {
            score += tmp;
            tmp += 2;
        }
        else
        {
            cout << score << endl;
            break;
        }
    }
    return 0;
}
