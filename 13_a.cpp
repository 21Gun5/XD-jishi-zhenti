#include <iostream>
using namespace std;

int func(int x)     //自定义递归函数，用于定义斐波那契数列
{
    if(x == 0)
        return 7;
    else if(x == 1)
        return 11;
    else
        return func(x-1) + func(x-2);
}

int main()
{
    int n, i, x, y;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> x;
        y = func(x);
        if(y % 3 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
