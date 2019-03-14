#include <iostream>
#include <algorithm>
using namespace std;

bool fun(int a, int b)      //sort所用的第三个参数，自定义的函数，指明从大到小的顺序
{
    return a > b;
}

int main()
{
    int m, i, j;
    cin >> m;
    int arr[m][m], sum[2*m+2] = {0};    //后续要进行加法，故将每个元素初始化为0，切记！

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
            sum[i] += arr[i][j];
    }
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < m; j++)
            sum[m+i] += arr[j][i];
    }
    for(i = 0;i < m;i++)
		sum[2*m] += arr[i][i];
	for(i = 0;i < m;i++)
		sum[2*m+1] += arr[i][m-1-i];

    sort(sum, sum+2*m+2, fun);      //默认从小到大，若要从大到小，需第三个参数，为自己定义的函数
                                    //在这直接使用sort来排序，其他排序算法也应熟悉
    for(i = 0; i < 2*m+2; i++)      //c++没有获取数组长度的函数，如len、length等，老老实实i<m来遍历
        cout << sum[i] << " ";
}
//二维数组，行之和、列之和，参考https://blog.csdn.net/weixin_44009743/article/details/85037591
