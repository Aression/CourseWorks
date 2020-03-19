#include <iostream>
using namespace std;
int main(){
    double LightYear,AstUnit;
    double trans(double LightYear);
    cout << "Enter the number of light years: ";
    cin >> LightYear;
    cout << LightYear << " light years = " << trans(LightYear) << " astronomical units" << endl;
    system("pause");
    return 0;
}
double trans(double LightYear){
    return 63240 * LightYear;
}