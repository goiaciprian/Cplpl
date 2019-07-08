#include <iostream>

int main()
{
    int r, g, b;
    std::cin >> r >> g >> b;

    std::cout << 255 - r << " ";
    std::cout << 255 - g << " ";
    std::cout << 255 - b << " ";
    
    return 0;
}