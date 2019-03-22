#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, arr[100][100] = {0};    //二维数组保存点的状态，涂黑则1，否则0
    cin >> n;
    while(n > 0)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<x2; i++)    //根据输入的范围进行扫描，扫到置为1
        {
            for(int j=y1; j<y2; j++)
            {
                arr[i][j] = 1;
            }
        }
        n--;
    }

    for(int i=0; i<100; i++)    //遍历数组，求值为1的个数
    {
        for(int j=0; j<100; j++)
        {
            if(arr[i][j] == 1)
                sum ++;
        }
    }
    cout << sum << endl;
    return 0;
}
