#include <iostream>
using namespace std;

int main()
{
    int num, ge, shi, bai;
    while(cin >> num)
    {
        if(num == 0)
            break;
        ge = num % 10;
        shi = num/10 % 10;
        bai = num /100;
        if(ge*ge*ge + shi*shi*shi + bai*bai*bai == num)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
