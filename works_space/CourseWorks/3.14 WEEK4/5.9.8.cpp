#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    char value[20];
    int time = 0;
    cout << "Enter words (to stop, type the word done)" << endl;
    cin >> value;
    while (strcmp(value,"done") != 0)
    {
        if (bool(cin >> value) == 1)
        {
            time++;
        }
    }
    cout << "You entered a total of " << time << " words." << endl;
    return 0;
}
