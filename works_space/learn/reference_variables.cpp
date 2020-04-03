#include <iostream>
using namespace std;

double cube(const double & num);
int main(int argc, char const *argv[])
{
    int x = 3.0;
    cout << cube(x);
    return 0;
}

double cube(const double & num)//仅当此处为const时，编译器才会生成临时变量
{
    return num*num*num;
}