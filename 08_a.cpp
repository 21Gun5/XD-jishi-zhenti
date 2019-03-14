#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, arr[1000], tmp = 1;
    while(cin >> n)
    {
        if(n == 0)
            break;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int d = (arr[n-1] - arr[0]) / (n-1);
        for(int i = 0; i < n-1; i++)
        {
            if(d != arr[i+1] - arr[i])
            {
                tmp = 0;
                break;
            }
        }
        if(tmp)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
