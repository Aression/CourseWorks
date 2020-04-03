#include <iostream>
using namespace std;

//function pre
double caculate(double a, double b, double (*pf)(double x,double y));
double MinusFunc(double x, double y);
double AddFunc(double x,double y);

int main(int argc, char const *argv[])
{
    double num1,num2;//initialize the container

    double (*p[2])(double,double);
    p[0] = MinusFunc;p[1] = AddFunc;//initialize the list of functions.

    while (true)//cycle
    {
        cout << "Please input two numbers devided in space(enter 233 666 to quit.): ";
        cin >> num1 >> num2;
        if (num1 == 233 && num2 == 666)//set the break condition.
        {
            cout << "Done!";
            break;
        }
        for (int i = 0; i < 2; i++)//activite the two functions.
        {
            cout << "The " << i+1 << "st function activited...\n";
            cout << "The result is: " <<  caculate(num1,num2,p[i]) << endl;
        }
    }
    return 0;
}
//caculate function
double caculate(double a, double b, double (*pf)(double x,double y))
{
    return pf(a,b);
}
//minusfunction
double MinusFunc(double x, double y)
{
    return x-y;
}
//addfunction
double AddFunc(double x,double y)
{
    return x+y;
}