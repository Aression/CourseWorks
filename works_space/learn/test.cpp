#include<iostream>

using namespace std;
const int length = 10;

double grade[];
double average = 0;

void input(double[]);
void process(double[]);
void output(double[]);

int main()
{

	input(grade);
	process(grade);
	output(grade);
}
void input(double grade[])
{
	cout << "Please enter your golf scores(no more than ten): ";
	for (size_t i = 0; i < length; i++)
	{
		cin >> grade[i];
		if (cin.get()=='\n')
		{
			break;
		}
	}
}
void process(double grade[])
{
	double sum = 0;
	for (size_t i = 0; i < sizeof(grade) - 1; i++)
	{
		sum += grade[i];
		average = sum / i;
	}
}
void output(double grade[])
{
	for (size_t i = 0; i < sizeof(grade) - 1; i++)
	{
		cout << grade[i] << " ";
	}
	cout << endl;
	cout << "Average grades is " << average;
}
