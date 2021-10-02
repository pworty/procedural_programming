#include <iostream>

using namespace std;

int numberSign(int x) {
    if (x > 0) return 1;
    if (x == 0) return 0;
    if (x < 0) return -1;
}

int main() {
    int n;
    cout << "Input n:";
    cin >> n;
    cout << numberSign(n);
    return 0;
}
