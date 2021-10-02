#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string spaceFormat(string text) {
    for (char & i : text) {
        if (i == ' ') {
            i = '_';
        }
    }
    return text;
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
