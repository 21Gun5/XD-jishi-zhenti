#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int i, n, mid_loc, left_count, right_count;
	cin >> n;
    int arr[n];
	for(i=0; i<n; i++)
		cin >> arr[i];
	sort(arr, arr+n);

	mid_loc = n/2;               //中间数所在的位置，同数组从0开始
	left_count = mid_loc;            //其左边数字的个数，即小于等于中间数的
	right_count = n-mid_loc-1;       //同上
	//去掉左边与中间相同值数的个数
	for(i=mid_loc-1; i>=0; i--)
	{
		if(arr[i] == arr[mid_loc])
			left_count--;
		else
			break;
	}

	//去掉右边与中间相同值数的个数
	for(int i=mid_loc+1; i<n; i++)
	{
		if(arr[i] == arr[mid_loc])
			right_count--;
		else
			break;
	}

	//输出结果
	if(left_count == right_count)
		cout << arr[mid_loc] << endl;
	else
		cout << -1 <<endl;
	return 0;

}
