#include <iostream>
#include <cmath>
using namespace std;

struct polar
{
    double distance;double angle;
};
struct rect
{
    double x;double y;
};
void trans(const rect *pxy,polar * pda);
void show(const polar *pda);
int main(int argc, char const *argv[])
{
    rect rplace;
    polar pplace;
    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)
    {
        trans(&rplace,&pplace);
        show(&pplace);
        cout << "Next pair(q to quit): ";
    }
    cout << "Done" << endl;
    return 0;
}
void show(const polar * pda)
{
    const double Rad_to_deg = 57.29577951;
    cout << "Distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg << " degrees.\n";
}
void trans(const rect *pxy, polar *pda)
{
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y,pxy->x);
}