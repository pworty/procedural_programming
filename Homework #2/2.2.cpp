#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
	int N;
	int n;
	cout << "Input N\n";
	cin >> N;
	
	if (int(N) == N)
		n = N;
	else
		n = int(N) + 1;

	for (int i = 0; i <= 10; i++){
		cout << n;
		n++;
	}

	return 0;
}
