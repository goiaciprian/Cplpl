#include <iostream>

int main()
{
    int n, m;

    std::cin >> n >> m;
    if (m % n == 0)
    {
        std::cout << m / n;
    }

    return 0;
}