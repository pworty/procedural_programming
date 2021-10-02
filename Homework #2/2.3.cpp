#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{	
	float x, y, b, z;
	cout << "Input x, y, b\n";
	cin >> x, y, b;

	if (b - y <= 0){
		cout << "Error: ln(b - y), (b - y)  <= 0\n";
		return 0;
	}
	if (b - x < 0){
		cout << "Error: root from (b - x), (b - x) < 0\n";
		return 0;
	}

	z = log(b - y)*pow(b - x, 0.5);
	cout << z << "\n";
	return 0;
}
