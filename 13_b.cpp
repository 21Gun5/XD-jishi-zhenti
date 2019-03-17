#include <iostream>
#include <map>      //map：可存储键值对的容器
using namespace std;

int main()
{
    int i, num;
    map <int, int> num_times;       //声明map对象
    for(i=0; i<20; i++)
    {
        cin >> num;
        if(num_times.find(num) != num_times.end())      //end()返回空，如果查找不为空，即找到；
            num_times[num] += 1;        //[]法：若已存在，则修改，若不存在，则插入；insert法；若已存在，则插入失败
        else        //首次出现的数字
            num_times[num] = 1;
    }
    map <int,int>::iterator it;     //定义迭代器对象
    it = num_times.begin();     //迭代器初始化，类似指针，将其指向头部
    while(it != num_times.end())
    {
        cout << it->first << ":" << it->second << endl;     //当前指向对象的第一个和第二个位置，即键和值
        it++;       //指针后移
    }
    return 0;
}
