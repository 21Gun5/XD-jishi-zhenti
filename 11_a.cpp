#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gwsum(int num)      //�Զ��庯�����������ĸ�λ֮�ͣ���497��4+9+7=20
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
    vector <int> arr_sum;       //���Ϊ�ɱ������
    while(cin >> num)
    {
        if(num == 0)
            break;
//        cout << gwsum(num) << endl;
        sum = gwsum(num);
        arr_sum.push_back(sum);     //����������������
    }
    sort(arr_sum.begin(), arr_sum.end());     //vector������sort����Ҫ�õ�begin��end��������sort(a,a+3)
    for(int i = 0; i < arr_sum.size(); i++)      //size()������ʵ�����ݸ���
        cout << arr_sum[i] << " ";
    cout << endl;
    return 0;
}
