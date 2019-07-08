#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (a > 0 && b > 0 || a < 0 && b < 0)
    {
        std::cout << "da" << std::endl;
    }else
    {
        std::cout << "nu" << std::endl;
    }
    
    return 0;
}