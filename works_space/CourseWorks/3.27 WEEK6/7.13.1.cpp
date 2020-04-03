#include <iostream>
using namespace std;

// function prototypes
double aver(double a,double b);

int main(int argc, char const *argv[])
{
    double a,b;
    cout << "Enter two nums(any zeros leds to quit): ";
    cin >> a >> b;
    while (a+b!=a && a+b!=b)
    {
        cout << "The aver num is: " << aver(a,b) << endl;
        cout << "Enter two nums(any zeros leds to quit): ";
        cin >> a >> b;
    }
    cout << "Terminated.";
    return 0;
}
//compute the average result
double aver(double x,double y)
{
    return 2.0*x*y/(x+y);
}