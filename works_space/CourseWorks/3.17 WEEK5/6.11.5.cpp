#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    long long int income;
    double tax;
    while (flag)
    {
        cout << "\nPlease input your income (you should enter integers): " << endl;
        cin >> income;
        if (!cin >> income)
        {
            cout << "Wrong value. Program terminating......";
            flag = false;
        }

        if (income <= 5000)
        {
            tax = 0;
        }
        else if (income > 5000 && income <= 15000)
        {
            tax = 5000 * 0 + (income - 5000) * 0.1;
        }
        else if (income > 15000 && income <= 35000)
        {
            tax = 5000 * 0 + 10000 * 0.1 + (income - 15000) * 0.15;
        }
        else
        {
            tax = 5000 * 0 + 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        if (flag)
        {
            cout << "You should hand in: " << tax;
        }
    }

    return 0;
}
