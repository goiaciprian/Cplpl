#include <iostream>
#include <string>

int main()
{
    int treiCifre,integerUnNumar, count;
    std::string numar, unNumar;
    do
    {
        std::cin >> treiCifre;
    } while (std::to_string(treiCifre).length() != 3);
    numar = std::to_string(treiCifre);

    for (int i = 0; i<3; i++)
    {
        unNumar = numar[i];
        integerUnNumar = std::stoi(unNumar);
        if (integerUnNumar % 2 != 0)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}