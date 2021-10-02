#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string spaceFormat(string text) {
    string word;
    cout << "Input a string:";
    cin >> word;
    word += " ";
    string res = "Not found";
    size_t found = text.find(word);
    if (found!=string::npos)
        res = "Found at pos " + to_string(found);
    return res;
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
