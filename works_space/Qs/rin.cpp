#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    long long n,stamp=0;
    int t=0;
    cin >> n;
    while (n!=2)
    {
        for(int i = 1; i <= n; i ++)   //遍历1到n
        {
            if(n%i == 0)            //取余为0能被整除
                stamp ++;    //计算x
        }
        cout << stamp << endl;
        t ++;
        n = stamp;
        stamp = 0;
    }
    cout << t;
    system("pause");
    return 0;
}