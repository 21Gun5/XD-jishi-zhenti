#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, arr[100][100] = {0};    //��ά���鱣����״̬��Ϳ����1������0
    cin >> n;
    while(n > 0)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i=x1; i<x2; i++)    //��������ķ�Χ����ɨ�裬ɨ����Ϊ1
        {
            for(int j=y1; j<y2; j++)
            {
                arr[i][j] = 1;
            }
        }
        n--;
    }

    for(int i=0; i<100; i++)    //�������飬��ֵΪ1�ĸ���
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
