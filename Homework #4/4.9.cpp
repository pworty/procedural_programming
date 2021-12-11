#include <iostream>
#include <cstring>

using namespace std;

int val(char c) {
    if (c >= '0' && c <= '9')
        return (int) c - '0';
    else
        return (int) c - 'A' + 10;
}

char reVal(int num) {
    if (num >= 0 && num <= 9)
        return (char) (num + '0');
    else
        return (char) (num - 10 + 'A');
}

void strev(char *str) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


int toDecimal(char *str, int base) {
    int len = strlen(str);
    int power = 1;
    int num = 0;
    int i;

    for (i = len - 1; i >= 0; i--) {
        if (val(str[i]) >= base) {
            printf("Invalid Number");
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

char *fromDecimal(char res[], int base, int inputNum) {
    int index = 0;

    while (inputNum > 0) {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    strev(res);

    return res;
}

int main() {
    char str1[10], str2[10];
    int base1, base2;
    cout << "Input the first number and its base" << endl;
    cin >> str1 >> base1;
    cout << "Input base to convert the number to" << endl;
    cin >> base2;
    printf("%s (base %d) is equivalent to %s (base %d)\n",
           str1, base1, base2, fromDecimal(str2, base2, toDecimal(str1, base1)));
    return 0;
}
