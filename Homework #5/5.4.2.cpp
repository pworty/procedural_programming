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
    int counter = 1;
    cout << "Input n:";
    cin >> n;
    if (n < 0) cout << "Error: n < 0";
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            tmp += counter;
            counter += 1;
        }
        ans += factorial(n - i) / sqrt(tmp);
        tmp = 0;
    }
    cout << "y=" << ans;
    return 0;
}
