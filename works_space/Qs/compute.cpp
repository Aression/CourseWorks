#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    string operator;
    cin >> num1 >> operator >> num2;
    if (operator == "+")
    {
        cout << num1 operator num2;
    }
    if (operator == "-")
    {
        cout << num1 operator num2;
    }
    if (operator == "*")
    {
        cout << num1 operator num2;
    }
    if (operator == "/")
    {
        cout << num1 operator num2;
    }
    if (operator == "%")
    {
        cout << num1 operator num2;
    }
    else
    {
        cout<<"ERROR";
    }
    system("pause");
    return 0;
}