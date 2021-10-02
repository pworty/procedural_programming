#include <iostream>
#include <cmath>

using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 6; j++)
            cout << string("* ");
        for (int j = 1; j <= 42; j++)
            cout << string("_");
        cout << endl;
        for (int j = 1; j <= 5; j++)
            cout << string(" *");
        cout << "  ";
        for (int j = 1; j <= 42; j++)
            cout << string("_");
        cout << endl;
    }
    for (int i = 1; i <= 6; i++)
        cout << string("* ");
    for (int j = 1; j <= 42; j++)
        cout << string("_");
    cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 54; j++)
            cout << string("_");
        cout << endl;
    }
    return 0;
}
