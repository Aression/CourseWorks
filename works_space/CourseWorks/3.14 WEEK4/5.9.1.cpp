#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int value1,value2;
    int sum = 0;
    cout << "Please enter two integers separated by spaces(sorted): " << endl;
    cin >> value1 >> value2;
    for (int i = value1; i <= value2; i++)
    {
        sum+=i;
    }
    cout << "The sum of integers is: " << sum;
    return 0;
}
