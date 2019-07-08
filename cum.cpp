//cum.cpp --PbInf -- ;
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    long long a, b;
    ifstream inFile("sum.in");
    ofstream outFile("sum.out");

    inFile >> a >> b;
    outFile << a+b;
    inFile.close();
    outFile.close();

    return 0;
}