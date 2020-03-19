#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int N,U,D,L;
    cin >> N >> U >> D;
	int time;
	time=L=0;
	while(L<N){
		time++;
		L=L+U;
		if(L>=N)
			break;
		L=L-D;
		time++;
	}
	cout << time;
	return 0;
}