#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int stamp;
    cin >> a >> b >> c;
    if (a==b)
    {
        cout << "C";
    }
    else
    {
        if (a==c)
        {
            cout << 'B';
        }
        else
        {
            cout << "A";
        }
    }
    system("pause");
    return 0;
}