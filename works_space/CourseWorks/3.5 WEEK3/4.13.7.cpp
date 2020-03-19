#include <iostream>
#include <string>

using namespace std;
struct Pizza{
    string band;
    double diameter;
    double weight;
};
int main(int argc, char const *argv[])
{
    Pizza value;
        cout << "the Pizza's band is: " << endl;
        getline(cin,value.band);
        cout << "the Pizza's diameter is: " << endl;
        cin >> value.diameter;
        cout << "the Pizza's weight is: " << endl;
        cin >> value.weight;

        cout << "\nthe Pizza's elements:" << endl;
        cout << "band: " << value.band << endl;
        cout << "diameter: " << value.diameter << endl;
        cout << "weight: " << value.weight << endl;
    return 0;
}
