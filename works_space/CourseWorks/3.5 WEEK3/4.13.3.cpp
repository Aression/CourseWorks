#include<iostream>
#include<cstring>
int main()
{
    using namespace std;

    char name[40] = "";
    char fname[20];
    char lname[20];

    cout<<"Enter your first name: ";
    cin.getline(fname,20);
    cout<<"Enter your last name: ";
    cin.getline(lname,20);

    strcat(name,lname);
    strcat(name,", ");
    strcat(name,fname);
    
    cout<<"Here's the information in a single string: "<<name;
    return 0;
}