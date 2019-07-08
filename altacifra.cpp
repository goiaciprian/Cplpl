#include <iostream>
#include <string>

using namespace std;

int main()
{
    string number;
    string finalNumber, afterDot;
    bool dot = false;

    getline(cin, number);

    for (char var : number)
    {
        if(dot)
        {
            afterDot += var;
        }
        else
        {
            if (var != '.')
            {
                finalNumber += var;
            }
            else
            {
                dot = true;
            }       
        }
    }

    cout << afterDot[0];
}