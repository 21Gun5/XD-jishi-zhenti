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

    //��ά���鴫���鷳���Ͳ���װ�ں������ˣ�ֱ�Ӳ���

    for(i=0; i<m; i++)      //���ÿһ������С�ģ�����min[m]��
    {
        Min[i] = arr[i][0];
        for(j=0; j<n; j++)
        {
            if(arr[i][j] < Min[i])
                Min[i] = arr[i][j];
        }
    }

    for(j=0; j<n; j++)      //���ÿһ������С�ģ�����Max[n]��
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
            if(Min[i] == Max[j])    //�е���Сֵ�������е����ֵ����Ϊ����
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
