#include <iostream>
#include <map>      //map���ɴ洢��ֵ�Ե�����
using namespace std;

int main()
{
    int i, num;
    map <int, int> num_times;       //����map����
    for(i=0; i<20; i++)
    {
        cin >> num;
        if(num_times.find(num) != num_times.end())      //end()���ؿգ�������Ҳ�Ϊ�գ����ҵ���
            num_times[num] += 1;        //[]�������Ѵ��ڣ����޸ģ��������ڣ�����룻insert�������Ѵ��ڣ������ʧ��
        else        //�״γ��ֵ�����
            num_times[num] = 1;
    }
    map <int,int>::iterator it;     //�������������
    it = num_times.begin();     //��������ʼ��������ָ�룬����ָ��ͷ��
    while(it != num_times.end())
    {
        cout << it->first << ":" << it->second << endl;     //��ǰָ�����ĵ�һ���͵ڶ���λ�ã�������ֵ
        it++;       //ָ�����
    }
    return 0;
}
