#include <iostream>
#include <string>

using namespace std;

int main()
{
    string number;
    string finalNumber;

    getline(cin, number);

    for(char var: number)
    {
        if(var != '.')
        {
            finalNumber += var;
        }
        else { break;}
    }

    cout << finalNumber[finalNumber.length() - 1];

}