#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct car{
    string make;
    int year;
};

int main(int argc, char const *argv[])
{
    int num;
    string temp;
    cout << "How many cars you want to catalog?" << endl;
    cin >> num;
    cin.get();
    car *p = new car[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i+1 << endl;
        cout << "Please enter the make: ";
        getline(cin,p[i].make);
        cout << "Please enter the year made: ";
        cin >> p[i].year;
        cin.get();
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << p[i].year << " " << p[i].make << endl;
    }
    delete p;
    return 0;
}
