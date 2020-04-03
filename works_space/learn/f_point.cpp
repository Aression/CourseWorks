#include <iostream>
using namespace std;

/*double betsy(int);
double pam(int);*/
void estimate(int lines, double (*pf)(int));

double betsy(int lns)
{
    return 0.05*lns;
}
double pam(int lns)
{
    return 0.03*lns+0.0004*lns*lns;
}

int main()
{
    int code;
    cout << "How many lines do you want to code? ";
    cin >> code;
    cout << "Betsy estimates: "; estimate(code, betsy);
    cout << "\nPam estimates: "; estimate(code, pam);
    return 0;
}

void estimate(int lines, double (*pf)(int))
{
    cout << lines << " lines may take ";
    cout << (*pf)(lines) << " hour(s)" << endl;
}