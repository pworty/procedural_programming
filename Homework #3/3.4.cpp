#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream file("example.txt");
    file << "Po1g ch23amp 6\nBog 2 98 vog";
    file.close();

    ifstream fileread("example.txt");
    string tmp;
    while (getline(fileread, tmp)) {
        bool number = false;
        for(char i : tmp)
        {
            if(isdigit(i))
            {
                cout<<i;
                number = true;
            }
            else if (number)
            {
                cout<<" ";
                number=false;
            }
        }
        cout << endl;
    }
    fileread.close();

    return 0;
}
