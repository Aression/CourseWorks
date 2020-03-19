#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int year,time;
    float res;
    cin >> year >> time;
    if (year>=5)
    {
        if (time<=40)
        {
            res = time * 50;
        }
        else
        {
            res = 2000 + (time-40) * 75;
        }
    }
    else
    {
        if (time<=40)
        {
            res = time * 30;
        }
        else
        {
            res = 1200 + (time-40) * 45;
        }
    }
    cout << setiosflags(ios::fixed)<<setprecision(2)<< res;
    system("pause");
    return 0;
}