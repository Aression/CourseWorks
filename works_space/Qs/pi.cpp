#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
 
int main() 
{
    double result = 0;
    double temp = 1;
    double fenzi = 1, fenmu = 1;
    double m = 1;
    double n;
    cin>>n;
    while (temp >= n) {
			result += temp;
			fenzi *= m;
			fenmu *= (2 * (m + 1) - 1);
			m++;
			temp = fenzi / fenmu;
		}
    result += temp;
    printf("%.6f", result * 2);
    system("pause");
    return 0;
}