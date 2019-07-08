#include <iostream>
#include <string>

int main()
{
    int x, y, sum;
    std::string suma;

    std::cin >> x >> y;
    sum = x + y;
    suma = std::to_string(sum);
    std::cout << suma[suma.length() - 1] << std::endl;

    return 0;
}