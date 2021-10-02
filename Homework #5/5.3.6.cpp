#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string spaceFormat(string text) {
    int cur_length = 0;
    int min_length;
    for (char & i : text) {
        if (i == ' ') {
            if (cur_length < min_length) {
                min_length = cur_length;
            }
            cur_length = 0;
        }
        else {
            cur_length += 1;
        }
    }
    return to_string(min_length);
}


int main() {
    ifstream inp("input.txt");
    string fstr;
    string tmp;
    getline(inp, tmp);
    fstr = spaceFormat(tmp);
    cout << fstr;
    inp.close();

    ofstream outp("output.txt");
    outp << fstr;
    outp.close();

    return 0;
}
