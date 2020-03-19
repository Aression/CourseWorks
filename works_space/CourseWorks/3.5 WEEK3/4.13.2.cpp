#include <iostream>
#include <string>
int main(int argc, char const *argv[])
{
    using namespace std;
    string fn,ln;
    char grade;
    int age;

    cout << "What is your first name? ";
    getline(cin,fn);
    cout << "What is your last name? ";
    getline(cin,ln);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;//input part

    cout << "Name: " << ln << ", " << fn << endl;
    cout << "Grade: " << char (grade+1) << endl;
    cout << "Age: " << age;//output part

    return 0;
}
