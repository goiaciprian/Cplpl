#include <iostream>


int main()
{
    int An, Sn, n, a1=6, r=6;
    std::cin >> n;

    // An = a1 + r(n-1)
    An = a1 + r * (n-2); // -2 pentru ca 1 este defapt primul element din sir
    
    // Sn = n(a1 + an) / 2
    Sn = n * An / 2;

    std::cout << Sn << std::endl;

    return 0;
}