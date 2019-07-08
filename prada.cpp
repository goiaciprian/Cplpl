//prada.cpp
#include <iostream>
using namespace std;

long long HA, HB, D;
int x;

int main()
{
    cin >> HA >> HB >> D;

    if(HA==HB) x = D/2;
    else
    {
        if(HA>HB) x = (D*D+HB*HB-HA*HA)/(2*D);
        else x = (D*D+HA*HA-HB*HB)/(2*D);
    }
    
    cout << x;

    return 0;
}