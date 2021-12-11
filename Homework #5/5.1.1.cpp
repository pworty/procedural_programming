#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    
    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

int main() {
    int a, b, x, y;
    cout << "Input a and b to find gcd of" << endl;
    cin >> a >> b;
    int g1 = gcdExtended(a, b, &x, &y);
    cout << "GCD(" << a << ", " << b
         << ") = " << g1 << endl;
    int g2 = gcdExtended(a, b, &x, &y);
    cout << "GCD_Extended(" << a << ", " << b
         << ") = " << g2 << endl;
}
