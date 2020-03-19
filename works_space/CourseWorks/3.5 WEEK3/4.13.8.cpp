#include <iostream>
#include <string>
using namespace std;
struct pizza
{
    string band;
    double diameter;
    double weight;
};

int main(int argc, char const *argv[])
{
    pizza *pz = new pizza;
        cout << "the Pizza's diameter is: " << endl;
        cin >> pz->diameter;
        cout << "the Pizza's band is: " << endl;
        cin.get();
        getline(cin,pz->band);
        cout << "the Pizza's weight is: " << endl;
        cin >> pz->weight;

        cout << "\nthe Pizza's elements:" << endl;
        cout << "band: " << pz->band << endl;
        cout << "diameter: " << pz->diameter << endl;
        cout << "weight: " << pz->weight << endl;
    return 0;
}
