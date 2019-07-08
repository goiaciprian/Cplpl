//eleviSiBanci.cpp -- PbInfo -- 100;
#include <iostream>


// * Dacă elevii unei clase se așează câte n într-o bancă
// * , vor rămâne e elevi în picioare, iar dacă se așează
// * câte m într-o bancă, vor rămâne b bănci neocupate.

int main()
{
    int m, n, e, b; // n , rest e; m , rest b;
    std::cin >> n >> m >> e >> b;

    int elevi, banci;

    banci = ((b*m) + e)/(m-n);
    elevi = n * banci + e;

    std::cout << elevi << "\n" << banci << std::endl;


    return 0;
}
