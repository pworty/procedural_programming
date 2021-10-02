#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double ans = 0;
    double tmp = 0;
    cout << "Input n:";
    cin >> n;
    if (n < 1) cout << "Error: n < 1";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            tmp += sin(j);
        }
        ans += i / tmp;
        tmp = 0;
    }
    cout << "y=" << ans;
    return 0;
}
