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

	mid_loc = n/2;               //�м������ڵ�λ�ã�ͬ�����0��ʼ
	left_count = mid_loc;            //��������ֵĸ�������С�ڵ����м�����
	right_count = n-mid_loc-1;       //ͬ��
	//ȥ��������м���ֵͬ���ĸ���
	for(i=mid_loc-1; i>=0; i--)
	{
		if(arr[i] == arr[mid_loc])
			left_count--;
		else
			break;
	}

	//ȥ���ұ����м���ֵͬ���ĸ���
	for(int i=mid_loc+1; i<n; i++)
	{
		if(arr[i] == arr[mid_loc])
			right_count--;
		else
			break;
	}

	//������
	if(left_count == right_count)
		cout << arr[mid_loc] << endl;
	else
		cout << -1 <<endl;
	return 0;

}
