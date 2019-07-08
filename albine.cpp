//albine.cpp
#include <iostream>
using namespace std;

long long n, c;
int main()
{
    cin >> n;
    if (n==1) c=1;
    else c=1+(3+3*(n-1))*(n-1);
    cout << c;

}