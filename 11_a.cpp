#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gwsum(int num)      //自定义函数：求整数的各位之和，如497：4+9+7=20
{
    int tmp, sum = 0;
    while(num > 0)
    {
        tmp = num % 10;
        sum = sum + tmp;
        num = num / 10;
    }
    return sum;


}
int main()
{
    int num, sum;
    vector <int> arr_sum;       //理解为可变的数组
    while(cin >> num)
    {
        if(num == 0)
            break;
//        cout << gwsum(num) << endl;
        sum = gwsum(num);
        arr_sum.push_back(sum);     //在数组最后添加数据
    }
    sort(arr_sum.begin(), arr_sum.end());     //vector可以用sort排序，要用到begin和end而数组是sort(a,a+3)
    for(int i = 0; i < arr_sum.size(); i++)      //size()容器中实际数据个数
        cout << arr_sum[i] << " ";
    cout << endl;
    return 0;
}
