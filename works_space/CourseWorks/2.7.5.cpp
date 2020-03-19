#include <iostream>
using namespace std;

float trans(float C);//return the FLOAT result

int main(){
    float C,F;
    cout << "Please enter a Celsius value: ";
    cin >> C;
    cout << C << " degrees Celsius is " << trans(C) << "degrees Fahrenheit.";
    system("pause");
    return 0;
}

float trans(float C){
    return 1.8*C + 32.0;
}