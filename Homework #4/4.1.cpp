#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file("example.txt");
    file << "1\n22";
    file.close();

    ifstream fileread("example.txt");
    string tmp;
    int sum = 0;
    while (getline(fileread, tmp)) {
        sum = sum + stoi(tmp);
    }
    cout << sum;
    fileread.close();

    return 0;
}
