#include <iostream>
using namespace std;

bool isPrime(int x)     //判断是否为素数，总是卡壳，记住！
{
    bool flag;
    for(int i=2; i<=x; i++)
    {
        flag = true;
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
                flag = false;
        }
    }
    return flag;
}

int main()
{
    int n, i, sum;
    while(cin >> n)
    {
        if(n == 0)
            break;
        sum = 0;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            if(isPrime(arr[i]))
                sum += arr[i];
        }
        cout << sum << endl;
    }
    return 0;
}
