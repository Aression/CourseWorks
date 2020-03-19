#include <iostream>
using namespace std;
int main(){
    int h,m;
    void printer(int h,int m);
    cout << "Enter the number of hours: ";
    cin >> h;
    cout << "Enter the number of minutes: ";
    cin >> m;
    printer(h,m);
    system("pause");
    return 0;
}
void printer(int h, int m){
    cout << "Time: " << h << ":" << m << endl;
}