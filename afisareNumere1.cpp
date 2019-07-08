#include <iostream>

int main()
{
    int x, z;
    std::cin >> x;
    z = x;
    for(int i=1; i<=x; i++)
    {
        if(i != 1) { z -= 1; }
        std::cout<< z << " ";
    }
    return 0;
}