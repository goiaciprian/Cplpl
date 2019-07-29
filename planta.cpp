#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream inFile("planta.in");
    ofstream outFile("planta.out");
    int d, a, b, n, h;

    inFile >> d >> a >> b >> n;
    inFile.close();

    if (n % 2 == 0) {
        h = d + ((n/2) * a) - ((n/2) * b);
    } else {
        h = d + (((n+1) / 2) * a) - ((n / 2) * b);
    }

    outFile << h;
    outFile.close();

    return 0;
}