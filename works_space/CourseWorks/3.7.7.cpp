#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    const float kiloToMile = 62.14;
    const float gallonToLiter = 3.875;//define the const variable.
    float euConsumption,usConsumption;//initialize the container.

    cout << "Please enter consumption in EU style: " << endl;
    cin >>  euConsumption;

    usConsumption = (gallonToLiter*kiloToMile)/euConsumption;//process the data into the aimed style.
    cout << "The consumption in US style is: " << usConsumption << endl;

    system("pause");
    return 0;
}
