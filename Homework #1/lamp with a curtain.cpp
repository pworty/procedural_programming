#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool getAns(string message)
{
    cout << message << endl;
    char ans;
    cin >> ans;
    while (!(ans == 'y' || ans == 'n')) {
        cout << ans << " is not a valid answer" << endl;
        cin >> ans;
    }
    return ans == 'y';
}

int main()
{
    cout << "Answer questions with y/n" << endl;
    bool lamp = getAns("Is the lamp on?");
    if (lamp)
    {
        cout << "The room is lit.";
    }
    else
    {
        bool day = getAns("Is it day?");
        bool curtains = getAns("Are curtains open?");
        if (day && curtains)
        {
            cout << "The room is lit.";
        }
        else
        {
            cout << "The room is unlit.";
        }
    }
}
