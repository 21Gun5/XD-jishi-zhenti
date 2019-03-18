#include <iostream>
#include <fstream>  //文件输入输出库
#include <algorithm>
using namespace std;

struct Score        //声明结构体
{
    string id;
    int num;
    int score;

    bool operator < (Score a)            //重载<运算符，即重新定义此结构体的小于关系，用于sort函数排序；只需要一个形参，默认有一个this
    {
        if(a.num != num)                 //this.num 中this要省略
            return num > a.num;          //题目数一样，按分数从小到大排，分数小的Score变量便大
        else                             //注意要num在前，a.num在后；类比记忆：this的为主人，形参为客人
            return score < a.score;      //题目按从小到大排，即题目数大的Score变量，反而小
    }

} stu_score[100];   //根据新定义的结构体类型定义数组
int main()
{
    int n = 0;  //数组元素的个数，留意此种手法，上面静态定义数组大小，i可用于动态的作用
    ifstream infile;
    infile.open("Score.txt", ios::in); //要打开的文件名；文件被打开的模式-用于读取；
    if(!infile) //文件打开失败
        return 0;
    while(!infile.eof())   //遍历
    {
        infile >> stu_score[n].id >> stu_score[n].num >> stu_score[n].score;    //文件流输入结构体中
        n++;
    }
    sort(stu_score, stu_score+n);   //目前已知晓sort有三种排序法:1.默认从小到大2.第三个参数为函数名，函数中定义规则，实现从大到小3.重构待排序对象的运算符，如本题中结构体，还可类
    for(int i=0; i<n; i++)
    {
        cout << stu_score[i].id << " " << stu_score[i].num << " " << stu_score[i].score << endl;
    }

    return 0;
}
