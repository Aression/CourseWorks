#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(int a3,int a2,int a1,int a0,double x);
double getMinus(double a,double b);
int main(int argc, char const *argv[])
{
    int a3,a2,a1,a0;
    double start,end,result;
    bool flag = true;
    cin >> a3 >> a2 >> a1 >> a0;
    cin.get();
    cin >> start >> end;
    cin.get();
    
    if (f(a3,a2,a1,a0,start) == 0)
    {
        result = start;flag = false;
    }
    if (f(a3,a2,a1,a0,end) == 0)
    {
        result = end;flag = false;
    }
    while (getMinus(end,start) >= 0.001 && f(a3,a2,a1,a0,start)*f(a3,a2,a1,a0,end) < 0 && flag)
    {
        double Mid = (start+end)/2;
        double res1 = f(a3,a2,a1,a0,start);
        double res2 = f(a3,a2,a1,a0,end);
        double resM = f(a3,a2,a1,a0,Mid);
        
        if (resM == 0)
        {
            result = Mid;
            break;
        }
        if (resM*res1 > 0)
        {
            start = Mid;
        }
        if (resM*res2 > 0)
        {
            end = Mid;
        }
    }
    if (flag)
    {
        result = (start+end)/2;
    }
    
    cout << setiosflags(ios::fixed) << setprecision(2) << result;
    
    return 0;
}
double f(int a3,int a2,int a1,int a0,double x)
{
    return a3*(x*x*x) + a2*(x*x) + a1*x + a0;
}
double getMinus(double a,double b)
{
    double res;
    if (a>0 && b<0)
    {
        res = a+(-b);
    }
    if (a<0 && b >0)
    {
        res = (-a)+b;
    }
    if (a<0 && b<0)
    {
        res = (-a)+(-b);
    }
    else
    {
        res = a-b;
    }
    
    return res;
}