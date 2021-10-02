#include <iostream>
#include<cstring>
using namespace std;

int main(){
    int i, j, temp, size;
    char s[31];

    cout << "Enter a string: ";
    cin.getline(s, 31);
    size = strlen(s);

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "Sorted string: " << s << endl;

    return 0;
}
