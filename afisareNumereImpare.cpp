#include <iostream>

int main()
{
    int x, z;
    std::cin >> x;
    z = x*2;
    for (int r=1; r<=x*2; r++)
    {
        if (r != 1) { z -= 1; }
        if (r % 2 == 0)
        {
            std::cout << z << " ";
        }
    }
    return 0;
}