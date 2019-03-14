#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    for(int x = a; x <= b; x++)
    {
        int sum = 0;
        for(int i = 1; i < x; i++)
        {
            if(x%i == 0)
                sum += i;
        }
        if(x == sum)
            cout << x << endl;
    }

    return 0;
}
