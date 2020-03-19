#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
using namespace std;

int main(int argc, char const *argv[])
{
	char filename[SIZE];
	ifstream inFile;
    
	while (!inFile.is_open())
	{
		cout << "Enter the file name: ";
		cin.getline(filename,SIZE);
		inFile.open(filename);
		if (inFile.is_open())
		{
			cout << "Successfully opened the file.\nData processing...\n";
			for (int i = 0; i < 3; i++)
			{
				_sleep(0.5*1000);//延时0.5秒 
				cout << ".....\n";
			}
		}
	}
	

	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	while (inFile.good())//.good()指出最后运行是否成功
	{
		++count;
		sum += value;
		inFile >> value;
	}
	if (inFile.eof())
	{
		cout << "END.\n";
	}
	else if (inFile.fail())
	{
		cout << "Input terminated by data mismatch.\n";
	}
	else
	{
		cout << "Input terminated by unknown reason.\n";
	}
	

	if (count == 0)
	{
		cout << "No data have been read.\n";
	}
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum/count << endl;
	}

	inFile.close();
	return 0;
}
