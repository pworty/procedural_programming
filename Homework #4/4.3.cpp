#include <iostream>
#include <cmath>

using namespace std;

float rect(float a, float b) {
    if (a >= 0 and b >= 0)
        return a * b;
    else
        return -1;
}

float tri(float a, float b, float c) {
    float p = (a + b + c) / 2;
    if (a >= 0 and b >= 0 and c >= 0)
        return sqrt(p * (p - a) * (p - b) * (p - c));
    else
        return -1;
}

float circle(float r) {
    if (r >= 0)
        return M_PI * r * r;
    else
        return -1;
}


int main() {
    cout << rect(1, 2) << endl << tri(3, 4, 5) << endl << circle(6);
    return 0;
}
