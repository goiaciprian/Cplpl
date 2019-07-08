#include <iostream>
#include <string>

int main()
{
    int x, lungime, s, unitai, zeci;
    std::string strX, unitatiStr, zeciStr;

    std::cin >> x;

    strX = std::to_string(x);
    lungime = strX.size();
    unitatiStr = strX[lungime-1];
    zeciStr = strX[lungime - 2];

    unitai = std::stoi(unitatiStr);
    zeci = std::stoi(zeciStr);

    s = unitai + zeci;

    std::cout << s << "\n";

    return 0;
}