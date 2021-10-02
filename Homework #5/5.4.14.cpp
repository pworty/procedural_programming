#include <iostream>
#include <cmath>
#include<unordered_set>

using namespace std;

int repeatedDigit(int n)
{
    unordered_set<int> s;
    while(n != 0)
    {
        int d = n % 10;
        if(s.find(d) != s.end())
        {
            return 0;
        }
        s.insert(d);
        n = n / 10;
    }
    return 1;
}

int main() {
    for (int i = 1000; i <= 9999; i++) {
        if (repeatedDigit(i)) cout << i << endl;
    }
    return 0;
}
