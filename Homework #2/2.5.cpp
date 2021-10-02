#include <iostream>
#include <math.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    float x, y;
    for (x = -4.0; x <=4.0; x += 0.5){
        y = (pow(x, 2) - 2*x + 2.0)/(x - 1.0);
        cout << y << "\t";
    }
    cout << "\n";
    return 0;
}
