#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<int> v;
    float tmp;
    float total = 0;
    float count = 0;
    float average;
    int above_normal = 0;
    cout << "**** Students height analysis ***" << endl << "Enter height (cm) and press <Enter>." << endl
         << "To exit enter 0 and press <Enter>" << endl;
    cout << "->";
    cin >> tmp;
    while (tmp != 0) {
        total += tmp;
        count += 1;
        v.push_back(tmp);
        cout << "->";
        cin >> tmp;
    }
    average = total / count;
    cout << endl << "Average height: " << average << " cm" << endl;
    for (int i: v) {
        if (i > average)
            above_normal += 1;
    }
    cout << above_normal << " Students have above normal height";
    return 0;
}
