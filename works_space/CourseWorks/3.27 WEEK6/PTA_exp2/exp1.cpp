#include <iostream>
using namespace std;

const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[],int n);

int main()
{
    cout << "Enter class size: ";
    int calss_size;
    cin >> calss_size;
    while (cin.get() != '\n')
    {
        continue;
    }
    student * ptr_stu = new student[calss_size];
    int entered = getinfo(ptr_stu,calss_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout << "Done.\n";
    return 0;
}

int getinfo(student pa[],int n)
{
    int num=0;char c;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the student's fullname: ";
        if ((c = cin.get()) != '\n')//take the flag for a experiment.
        {
            cin.unget();//if it is not a blankline, put it back and contiune.
            cin.getline(pa[i].fullname,SLEN);
        }
        else
        {
            break;//if not, terminate input process.
        }
        cout << "Enter the student's hobby: ";
        cin.getline(pa[i].hobby,SLEN);
        cout << "Enter the student's ooplevel: ";
        cin >> pa[i].ooplevel;
        num++;
        cin.sync();//clear the istream.
    }
    return num;//return the actual number of inputted students.
}
//func1, output.
void display1(student st)
{
    cout << "Fullname: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Ooplevel: " << st.ooplevel << endl;
}
//func2, output by pointer
void display2(const student *ps)
{
    cout << "Fullname: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Ooplevel: " << ps->ooplevel << endl;
}
//func, output in order.
void display3(const student pa[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << "st output: \n";
        cout << "Fullname: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Ooplevel: " << pa[i].ooplevel << endl;
        cout << i+1 << "st output terminated.\n";
    }
}