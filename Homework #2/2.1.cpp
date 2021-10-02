#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	float R, r, h, l;
	cout << "Input R, r, h\n";
	cin >> R, r, h;
	l = pow(pow((R - r), 2) + pow(h, 2), 0.5);

	if (R <= 0 or r <= 0 or r == R or r > R or h <= 0 or l <= 0){
		cout << "Invalid values\n";
		return 0;
	}


	float V = 1.0/3.0*M_PI*h*(pow(R, 2) + R*r + pow(r, 2));
	float S = M_PI*(pow(R, 2) + (R + r)*l + pow(r, 2));

	cout << "Volume=" << V << "\n";
	cout << "Surface area=" << S << "\n";

	return 0;
}
