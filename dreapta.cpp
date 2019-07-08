//dreapta.cpp -- PbInfo -- ;
#include <iostream>
using namespace std;

int main(void)
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    if(x1==x2) cout << "verticala" << endl;
    else if (y1==y2) cout << "orizontala" << endl;
    else cout << "oblica" << endl;

    return 0;
}