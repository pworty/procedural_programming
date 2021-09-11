#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    cout << "Input real numbers a, b, c separated by a singular space or on different lines to solve for x in ax^2 + bx + c = 0" << endl;
    float a, b, c;
    cin >> a >> b >> c;
    cout << (a != 0 && pow(b, 2) - 4 * a * c < 0 ? "x is undefined" : (a != 0 ? "x = " + to_string((-b + pow(pow(b, 2) - 4 * a * c, 0.5) / 2)) : (b != 0 ? "x = " + to_string(-c / b) : (b == 0 && c == 0 ? "x is any real number" : "x is undefined"))));
}
