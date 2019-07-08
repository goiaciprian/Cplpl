#include <iostream>

/* 

O firmă are două tipuri de camioane: camioane de tipul 1,
care pot transporta câte t1 tone de marfă pe zi, și camioane
de tipul 2, care pot transporta câte t2 tone de marfă pe zi.

Știind că firma are n camioane de tipul 1 și m camioane de
tipul 2, câte tone de marfă pot transporta camioanele firmei
în z zile.

*/

int main()
{
    int t1, t2, n, m, z; // tipul1, tipul2, numar de t1, numar de t2, zile
    int totalT1, totalT2;

    std::cin >> t1 >> t2 >> n >> m >> z;

    totalT1 = t1 * n;
    totalT2 = t2 * m;

    std::cout << (totalT1 + totalT2) * z << std::endl;

    return 0;
}