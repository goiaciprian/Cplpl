//curte.cpp -- PbInfo -- 100p
#include <iostream>

int main()
{
    int a, b, arie, perimetru;
    std::cin >> a >> b;

    arie = a * b;
    perimetru = 2 * ( a + b );

    std::cout << arie << " " << perimetru << std::endl;

    return 0;
}