#include <iostream>
#include <string>
using namespace std;
const int MAX = 10;

// function prototypes
int input(double list[]);
void show(double list[],int len);
double aver(double list[],int len);

int main(int argc, char const *argv[])
{
    double Score[MAX] = {};
    int len;
    len = input(Score);
    show(Score,len);
    cout << "Average score is: " << aver(Score,len);
    return 0;
}
//fill the list and return the max number of inputted values
//terminte by the character 'q'
int input(double list[])
{
    bool flag = true;
    int len = 0;
    string temp;
    for (int i = 0; i < MAX; i++)
    {
        if(flag)
        {
            cout << "Enter the " << i+1 << "st score(no more than 10, q to quit) \nYOU CANNOT INPUT ZERO\nenter:";
            cin >> temp;
            while (!atof(temp.c_str()))
            {
                if (temp == "q")
                {
                    cout << "Process terminated.\n";
                    flag = false;break;
                }
                else
                {
                    cout << "bad value. try again. ";
                    cin.sync();
                    cin >> temp;
                }
            }
            list[i] = atof(temp.c_str());
            len ++;
        }
    }
    return len-1;
}

//show the elements in one single line
void show(double list[],int len)
{
    cout << "DATA: ";
    for (int i = 0; i < len; i++)
    {
        cout << list[i] << "\t";
    }
    cout << endl;
}

//compute the average value
double aver(double list[],int len)
{
    double sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += list[i];
    }
    return sum/len;
}
