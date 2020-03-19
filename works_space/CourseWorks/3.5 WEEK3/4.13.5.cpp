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
    CandyBar snack = {
        "Moncha Munch",
        2.3,
        350,
    };
    cout << "We got something about this CandyBar..." << endl;
    cout << snack.band << endl;
    cout << snack.weight << endl;
    cout << snack.calorie << endl;
    return 0;
}
