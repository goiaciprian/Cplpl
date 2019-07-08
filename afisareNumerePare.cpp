#include <iostream>

int main()
{
    int x;
    std::cin >> x;

    for(int i=1; i<=x*2; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
}