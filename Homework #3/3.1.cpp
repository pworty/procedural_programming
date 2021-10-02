#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float S, p, n, r, rn, m;
    cout << "Enter S, p, n\n";
    cin >> S >> p >> n;
    r = p/100;

    if (S <= 0 or p <= 0 or n <= 0) {
        cout << "Values entered are non positive\n";
        return 0;
    }

    rn = pow(1 + r, n);
    m = S*r*rn/(12*(rn - 1));
    cout << "Monthly payment n equals " << m << "\n";

    return 0;
}
