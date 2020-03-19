#include <iostream>
using namespace std;
int main(){
    int printer1();
    int printer2();
    printer1();
    printer1();
    printer2();
    printer2();
    system("pause");
    return 0;
}
int printer1(){
    cout << "Three blind mice" << endl;
}
int printer2(){
    cout << "See how they run" << endl;
}