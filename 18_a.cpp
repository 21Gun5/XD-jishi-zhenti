#include <iostream>
using namespace std;

int main()
{
    int num, score = 0, tmp = 2;    //思想：设置一个类似开关的变量，当xx时开，当yy时关
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
