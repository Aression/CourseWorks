#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    using namespace std;
    
    string fn,ln;
    cout << "Enter your first name: ";
    getline(cin,fn);
    cout << "Enter your last name: ";
    getline(cin,ln);

    cout << "Here's the information in a single string: " << ln+", "+fn << endl;
    return 0;
}
