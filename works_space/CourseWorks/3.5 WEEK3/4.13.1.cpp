#include <iostream>
int main(int argc, char const *argv[])
{
    using namespace std;
    const int SIZE = 20;
    char fn[SIZE];
    char ln[SIZE];//initialize two characters
    char grade;
    int age;

    cout << "What is your first name? ";
    cin.getline(fn,SIZE);
    cout << "What is your last name? ";
    cin.getline(ln,SIZE);//input firstname and lastname in line.
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;//input part

    cout << "Name: " << ln << ", " << fn << endl;
    cout << "Grade: " << char (grade+1) << endl;
    cout << "Age: " << age;//output part

    return 0;
}
