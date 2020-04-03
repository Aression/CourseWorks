#include <iostream>
using namespace std;

// function prototypes
long int iter(long int num);

int main(int argc, char const* argv[])
{
    long int num;
    cout << "Input the INT number you want to iterate: ";
    while (!(cin >> num))    // bad input
    {
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        cout << "Bad input; Please enter a number: ";
    }
    int result = iter(num);
    cout << iter(num);
    return 0;
}

//iterator
long int iter(long int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * iter(num - 1);
    }
}