#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string func(string text) {
    int max = 0;
    string res;
    int size = text.length();
    for(int i = 0; i < size; i++)
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if(text[j] == text[i] and text[j] != ' ')
            {
                count++;
            }
        }
        if(count >  max)
        {
            max = count;
            res = text[i];
        }
    }
    return res;
}


int main() {
    ifstream inp("input.txt");
    string fstr;
    string tmp;
    getline(inp, tmp);
    fstr = func(tmp);
    cout << fstr;
    inp.close();

    ofstream outp("output.txt");
    outp << fstr;
    outp.close();

    return 0;
}
