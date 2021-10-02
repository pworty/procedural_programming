#include <iostream>
#include <cmath>

using namespace std;

int getSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    int m;
    cout << "Input m:";
    cin >> m;
    for (int i = 100; i <= 999; i++) {
        if (getSum(i) == m) {
            cout << i << endl;
        }
    }
    return 0;
}
