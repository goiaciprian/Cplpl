// rapunzel.cpp -- PbInfo --

#include <iostream>
#include <fstream>
using namespace std;

long long n, m1, m2, zile, peZi;// m1 - metri pe zi; m2 - metri pe noapte; n - lungimea turnului

int main(void)
{
    ifstream rapunzel("rapunzel.in");
    rapunzel >> n >> m1 >> m2;
    rapunzel.close();

    peZi = m1 + m2;

    if(n%peZi==0) zile = n/peZi;
    else zile = n/peZi + 1;

    ofstream rapunzelO("rapunzel.out");
    rapunzelO << zile;
    rapunzelO.close();

    return 0;
}