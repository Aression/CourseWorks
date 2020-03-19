#include <iostream>
#include <string>

using namespace std;
struct CandyBar{
    string band;
    double weight;
    int calorie;
};
int main(int argc, char const *argv[])
{
    CandyBar *pc = new CandyBar[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "the " << i+1 << "st CandyBar's band is: " << endl;
        cin >> (pc[i]).band;
        cout << "the " << i+1 << "st CandyBar's weight is: " << endl;
        cin >> (pc[i]).weight;
        cout << "the " << i+1 << "st CandyBar's calorie is: " << endl;
        cin >> (pc[i]).calorie;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\nthe " << i+1 << "st CandyBar's elements:" << endl;
        cout << "band: " << (pc[i]).band << endl;
        cout << "weight: " << (pc[i]).weight << endl;
        cout << "calorie: " << (pc[i]).calorie << endl;
    }
    return 0;
}
