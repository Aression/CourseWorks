#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int factorial(int num)//求阶乘函数，用于求分子。num表征分子公式里面的n
{
    if (num == 0)
    {
        return 1;//0！=1
    }
    else
    {
        return num*factorial(num-1);//如果传入参数不为零则用其乘以比他小1的数的阶乘
    }
}
double Denominator(double count)//求分母函数。参数count表征分母的公式里面的n
{
    if (count==0)
    {
        return 1;//2*0+1=1
    }
    else
    {
        return (2*count+1)*Denominator(count-1);//根据分母公式形式逐项相乘。即3*5*7……*（2n+1）
    }
}
int main()
{
    int s = 1,stamp = 0;//设置分子。stamp用于分离s和计算所需要的参数。
    double value;//设置限定精度变量
    double n = 0,t = 1,count = 1,pi = 0;//n为分母，t为最后一项，count表征分母的公式里面的n
    cin >> value;//输入限定精度
    while (t > value)//当最后一项比设置值小时，终止循环。
    {
        pi = pi + t;//逐项计算pi
        n = Denominator(count);//计算分母
        s = factorial(stamp);//计算分子
        count = count + 1;
        stamp = stamp + 1;//分母、分子的公式里面的n分别自增1
        t = s/n;
    }
    pi = pi*2;//由于计算所得的数字时pi/2,这里乘以2
    printf("%.6f", pi);
    system("pause");//便于调试
    return 0;
}