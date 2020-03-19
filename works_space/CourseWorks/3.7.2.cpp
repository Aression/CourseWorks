#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float foot,inch,lb;
    float meter_height,kg_weight,BMI;//initialize the container.

    const int foot_inch = 12;
    const float inch_meter = 0.0254;
    const float kg_lb = 2.2;//initialize const variables.

    cin >> foot >> inch >> lb;//get input data from istream.

    meter_height = (foot_inch * foot + inch)*inch_meter;
    kg_weight = lb / kg_lb;//process vital data.

    BMI = kg_weight / (meter_height*meter_height);
    cout << "Your BMI is: " << BMI << endl;//compute the result and output it.

    system("pause");
    return 0;
}
