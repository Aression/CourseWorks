#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int r1,r2,r3,r4,r5;
    int highest,average,lowest;
    cin >> r1 >> r2 >> r3 >> r4 >> r5;
    int array[5] = {r1,r2,r3,r4,r5};

    average = int((r1+r2+r3+r4+r5)/5);
    sort(array,array+5);
    highest = array[4];
    lowest = array[0];
    cout << highest << " " << average << " " << lowest;
    return 0;
}