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
    CandyBar queue[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "the " << i+1 << "st CandyBar's band is: " << endl;
        cin >> queue[i].band;
        cout << "the " << i+1 << "st CandyBar's weight is: " << endl;
        cin >> queue[i].weight;
        cout << "the " << i+1 << "st CandyBar's calorie is: " << endl;
        cin >> queue[i].calorie;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "\nthe " << i+1 << "st CandyBar's elements:" << endl;
        cout << "band: " << queue[i].band << endl;
        cout << "weight: " << queue[i].weight << endl;
        cout << "calorie: " << queue[i].calorie << endl;
    }
    return 0;
}
