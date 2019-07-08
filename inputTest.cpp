#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
    string lista[4];
    int count = 0;
    string s = "Somewhere down the road";
    istringstream iss(s);

    do
    {
        string subs;
        iss >> subs;
        lista[count] = subs;
        count++;
    } while (iss);
    for(int i=0; i<4; i++)
    {
        cout << lista[i] << endl;
    }
}