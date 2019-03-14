#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j;
    bool flag = false;
    cin >> m >> n;
    int arr[m][n], Min[m], Max[n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            cin >> arr[i][j];
    }

    //二维数组传参麻烦，就不封装在函数里了，直接操作

    for(i=0; i<m; i++)      //求出每一行中最小的，存在min[m]中
    {
        Min[i] = arr[i][0];
        for(j=0; j<n; j++)
        {
            if(arr[i][j] < Min[i])
                Min[i] = arr[i][j];
        }
    }

    for(j=0; j<n; j++)      //求出每一行中最小的，存在Max[n]中
    {
        Max[j] = arr[0][j];
        for(i=0; i<n; i++)
        {
            if(arr[i][j] > Max[j])
                Max[j] = arr[i][j];
        }
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(Min[i] == Max[j])    //行的最小值若等于列的最大值，则为马鞍点
            {
                cout << i << " " << j  << " " << arr[i][j] << endl;
                flag = true;
            }
        }
    }
    if(flag == false)
        cout << "no" << endl;
    return 0;
}
