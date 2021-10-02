#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file("example.txt");
    file << "Vos pogos\nBig snoop";
    file.close();

    ifstream fileread("example.txt");
    string tmp;
    while (getline(fileread, tmp)) {
        cout << tmp << endl;
    }
    fileread.close();

    return 0;
}
