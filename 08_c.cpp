#include <iostream>
using namespace std;

int main()
{
    int n, t, x = 1, y = 1, xn, yn;
    while(cin >> n)
    {
        if(n == 0)
            break;
        for(t = 1; ; t++)
        {
            xn = x;
            yn = y;
            x = (xn+yn) % n;
            y = (xn+2*yn) % n;
            if(x == 1 && y == 1)
            {
                cout << t << endl;
                break;
            }
        }
    }
    return 0;
}
