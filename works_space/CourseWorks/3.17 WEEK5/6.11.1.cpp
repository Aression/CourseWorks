#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string value;
    vector <string> value_lst;
    cout << "Enter string (end with @): " << endl;
    while (getline(cin,value))
    {
        if (value != "@")
        {
            value_lst.push_back(value);
        }
        else
        {
            break;
        }
    }
    for (int i = 0; i < value_lst.size(); i++)
    {
        char *p = (char*)value_lst[i].c_str();
        char *p1 = p;

        while (*p1 != '\0')
        {
            if (isupper(*p1))
            {
                *p1 += 32;
            }
            else if (islower(*p1))
            {
                *p1 -= 32;
            }
            p1++;
        }
        
    }
    
    cout << "Tranformed results: " << endl;

    for (int k = 0; k < value_lst.size(); k++)
    {
        cout << value_lst[k] << endl;
    }
    return 0;
}
