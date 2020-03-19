#include <iostream>
#include <array>

using namespace std;
int main(int argc, char const *argv[])
{
    cout << "please input your 40m race results(divided in space,such as 5.3 6.4 5.9) " << endl;
    array<double,3> res;
    cin >> res[0] >> res[1] >> res[2];
    cout << "time:" << 3 << endl;
    cout << "average result:" << (res[0] + res[1] + res[2])/3;
    return 0;
}

