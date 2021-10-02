#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cstring>


using namespace std;

string func(string text, int n) {
    transform(text.begin(), text.end(), text.begin(),
              [](unsigned char c){ return std::tolower(c); });
    char char_array[n + 1];
    strcpy(char_array, text.c_str());

    sort(char_array, char_array + n);

    int min_count = n+1, res = -1, curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (char_array[i] == char_array[i - 1])
            curr_count++;
        else {
            if (curr_count < min_count) {
                min_count = curr_count;
                res = char_array[i - 1];
            }
            curr_count = 1;
        }
    }

    if (curr_count < min_count)
    {
        min_count = curr_count;
        res = char_array[n - 1];
    }

    cout << (char)res;
    return "1";
}


int main() {
    ifstream inp("input.txt");
    string fstr;
    string tmp;
    getline(inp, tmp);
    fstr = func(tmp, tmp.length());
    inp.close();

    ofstream outp("output.txt");
    outp << fstr;
    outp.close();

    return 0;
}
