#include <iostream>

int main()
{
    int an;
    std::cin >> an;

    if(( an % 4 == 0 && an % 100 != 0 ) || an % 400 == 0 )
    {
        std::cout << "bisect" << std::endl;
    }
    else
    {
        std::cout << "nebisect" << std::endl;
    }
    return 0;
}