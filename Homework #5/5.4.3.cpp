#include <iostream>
#include <cmath>

using namespace std;

unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    double ans = 0;
    double tmp = 0;
    cout << "Input n:";
    cin >> n;
    if (n < 1) cout << "Error: n < 1";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            tmp += sin(j * 2);
        }
        ans += factorial(i) / tmp;
        tmp = 0;
    }
    cout << "y=" << ans;
    return 0;
}
