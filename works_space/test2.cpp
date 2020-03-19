#include <iostream>

int main(int argc, char const *argv[])
{
	using namespace std;
	char *ps;
	char animal[20] = "bear";
	ps = animal;
	cout << ps << (int *) ps <<endl;
	cout << animal << " at " << (int *) animal << endl;
	return 0;
}
