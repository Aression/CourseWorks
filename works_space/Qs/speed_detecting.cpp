#include <iostream>
using namespace std;
int main()
{
    int speed;
    cin >> speed;
    if (speed<=60)
    {
        cout << "Speed: " << speed <<" - " << "OK";
    }
    else
    {
        cout << "Speed: " << speed <<" - " << "Speeding";
    }
    system("pause");
    return 0;
}