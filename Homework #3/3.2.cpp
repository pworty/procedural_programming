#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float S, p, n, r, rn, m, delta, epsilon, previous;
    cout << "Enter S, m, n\n";
    cin >> S >> m >> n;

    if (S <= 0 or m <= 0 or n <= 0) {
        cout << "Values entered are non positive\n";
        return 0;
    }

    epsilon = 0.01;
    r = 0.01;

    rn = pow(1 + r, n);
    delta = m - S * r * rn / (12 * (rn - 1));
    previous = abs(delta);

    while (abs(delta) > epsilon and abs(delta) <= previous) {
        previous = abs(delta);
        rn = pow(1 + r, n);
        delta = m - S * r * rn / (12 * (rn - 1));
        r += 0.01;
    };
    p = r * 100;
    cout << "Percent p equals " << p << "%\n";

    return 0;
}
