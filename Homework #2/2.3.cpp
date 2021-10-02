#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
	float x, a, w;
	cout << "Input x\n";
	cin >> x;

	if (x == 0){
		cout << "Error: lg 0\n";
		return 0;
	}

	cout << "Input a\n";
	cin >> a;

	if (abs(x) < 1)
		w = a*log(abs(x));
	else
		if (a - pow(x, 2) < 0){
			cout << "Error: root from (a - x^2) < 0\n";
			return 0;
		}
		else
			cout << pow(a - pow(x, 2), 0.5);
	cout << "w=" << w << "\n";
	
	return 0;
}
