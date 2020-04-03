#include <iostream>
using namespace std;

inline double MinusFunc(double &x,double &y){ x=y*5;y=x*5;return x-y; }

int main(int argc, char const *argv[])
{
    double x,y;
    cout << "Please input two number and I'll print an awesome number: ";
    cin >> x >> y;
    while (true)
    {
        double temp = MinusFunc(x,y);
        if (temp != 1)
        {
            cout << temp << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}
