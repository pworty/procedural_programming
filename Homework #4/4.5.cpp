#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const float pi = 3.1415;
    const int plot_size = 32;

    float plot[plot_size];
    int count = 0;
    int pos = 0;
    int last_pos = 0;
    int x_pos = 0;
    int indent = 5;
    bool y_points = false;

    for (float x = -2 * pi; x <= 2 * pi; x += pi / (plot_size / 4)) {
        plot[count] = round(sin(x) * 10);
        count++;
    }

    for (int i = 0; i <= plot_size / 2 + 1 + indent; i++) {
        if (i == plot_size / 2 + 1 + indent) cout << "Y";
        else cout << " ";
    }
    cout << endl;
    for (int i = 0; i <= plot_size / 2 + 1 + indent; i++) {
        if (i == plot_size / 2 + 1 + indent) cout << "^";
        else cout << " ";
    }

    cout << endl;
    for (float y = 10; y >= -10; y -= 1) {
        pos = 0;
        last_pos = 0;
        x_pos = 0;
        y_points = false;
        for (int i = 0; i <= indent; i++) {
            if (y == 0) cout << "-";
            else cout << " ";
        }
        for (const float &value: plot) {
            if (value == y) {
                y_points = true;
                for (int i = 0; i < pos - last_pos; i++) {
                    if (y == 0) cout << "-";
                    else if (x_pos == plot_size / 2) cout << "|";
                    else cout << " ";
                    x_pos++;
                }
                cout << "*";
                x_pos++;
                last_pos = pos + 1;
            }
            pos++;
        }
        if (!y_points) {
            for (int i = 0; i <= plot_size / 2; i++) {
                if (i == plot_size / 2) cout << "|";
                else cout << " ";
            }
        } else if (y == 0) {
            for (int i = 0; i <= sizeof(plot) / sizeof(plot[0]) - last_pos + indent; i++) {
                cout << "-";
            }
            cout << ">X";
        }
        cout << endl;
    }
}
