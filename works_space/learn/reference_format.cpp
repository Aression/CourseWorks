#include <iostream>
#include <string>
using namespace std;

const string& version(string& s1, const string& s2);

int main(int argc, char const* argv[])
{
    string value;
    string decorate = "***";
    cin >> value;
    cout << "The orginal type: " << value << endl;
    cout << "The enhanced type: " << version(value, decorate) << endl;
    cout << "The value changed? " << value << endl;
    return 0;
}

const string& version(string& s1, const string& s2)//当返回引用的函数的参数均为const类型时，此函数的返回引用也必须为const类型
{
    s1 = s2 + s1 + s2;
    return s1;//函数返回的对象引用，必须在调用函数前就已经存在，不允许返回局部变量的引用！
}
//当不希望返回的对象被修改的时候，可以添加const