#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string spaceFormat(string text) {
    string ascii;
    for (char &i: text) {
        ascii += to_string(int(i)) + "\n"; // i = 1
    }
    return ascii;
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
