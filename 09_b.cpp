#include <iostream>
#include <algorithm>
using namespace std;

bool fun(int a, int b)      //sort���õĵ������������Զ���ĺ�����ָ���Ӵ�С��˳��
{
    return a > b;
}

int main()
{
    int m, i, j;
    cin >> m;
    int arr[m][m], sum[2*m+2] = {0};    //����Ҫ���мӷ����ʽ�ÿ��Ԫ�س�ʼ��Ϊ0���мǣ�

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

    sort(sum, sum+2*m+2, fun);      //Ĭ�ϴ�С������Ҫ�Ӵ�С���������������Ϊ�Լ�����ĺ���
                                    //����ֱ��ʹ��sort���������������㷨ҲӦ��Ϥ
    for(i = 0; i < 2*m+2; i++)      //c++û�л�ȡ���鳤�ȵĺ�������len��length�ȣ�����ʵʵi<m������
        cout << sum[i] << " ";
}
//��ά���飬��֮�͡���֮�ͣ��ο�https://blog.csdn.net/weixin_44009743/article/details/85037591
