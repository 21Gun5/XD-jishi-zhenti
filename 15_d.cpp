#include <iostream>
#include <fstream>  //�ļ����������
#include <algorithm>
using namespace std;

struct Score        //�����ṹ��
{
    string id;
    int num;
    int score;

    bool operator < (Score a)            //����<������������¶���˽ṹ���С�ڹ�ϵ������sort��������ֻ��Ҫһ���βΣ�Ĭ����һ��this
    {
        if(a.num != num)                 //this.num ��thisҪʡ��
            return num > a.num;          //��Ŀ��һ������������С�����ţ�����С��Score�������
        else                             //ע��Ҫnum��ǰ��a.num�ں���ȼ��䣺this��Ϊ���ˣ��β�Ϊ����
            return score < a.score;      //��Ŀ����С�����ţ�����Ŀ�����Score����������С
    }

} stu_score[100];   //�����¶���Ľṹ�����Ͷ�������
int main()
{
    int n = 0;  //����Ԫ�صĸ�������������ַ������澲̬���������С��i�����ڶ�̬������
    ifstream infile;
    infile.open("Score.txt", ios::in); //Ҫ�򿪵��ļ������ļ����򿪵�ģʽ-���ڶ�ȡ��
    if(!infile) //�ļ���ʧ��
        return 0;
    while(!infile.eof())   //����
    {
        infile >> stu_score[n].id >> stu_score[n].num >> stu_score[n].score;    //�ļ�������ṹ����
        n++;
    }
    sort(stu_score, stu_score+n);   //Ŀǰ��֪��sort����������:1.Ĭ�ϴ�С����2.����������Ϊ�������������ж������ʵ�ִӴ�С3.�ع�������������������籾���нṹ�壬������
    for(int i=0; i<n; i++)
    {
        cout << stu_score[i].id << " " << stu_score[i].num << " " << stu_score[i].score << endl;
    }

    return 0;
}
