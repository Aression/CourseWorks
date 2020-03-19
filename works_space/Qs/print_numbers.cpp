#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int first,last;
    cin >> first >> last;
    int sum = 0;
    int steps = last - first + 1;
    for (int i = 1; i <= steps; i+=1)
    {
        if (first != last)
        {
            if (i%5 != 0)
            {
                cout << setw(5) << setiosflags(ios::right) << first;
            }
            else
            {
                cout << setw(5) << setiosflags(ios::right) << first << endl;
            }
            sum += first;
            first += 1;
        }
        else
        {
            cout << setw(5) << setiosflags(ios::right) << last << endl;
            sum += first;
        }
    }
    cout << "Sum = " << sum;
    system("pause");
    return 0;
}