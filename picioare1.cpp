//picioare1.cpp -- PbInfo -- 100;
#include <iostream>

int main()
{
    int capete, picioare, oi, gaini; // * gaini - 2 picioare, oi - 4 picioare;
    std::cin >> capete >> picioare;

    // {g + o = capete | * (-2);
    // {2g + 4o = picioare;
    // --------------------
    // { -2g -2o = -2capete;
    // { 2g +40 = picioare;
    // --------------------
    // / 2o = picioare -2 * capete => o = (picioare -2*capete)/2;
    //  g = capete - (picioare-2*capete)/2

    oi = (picioare - (2 * capete)) / 2;
    gaini = capete - oi;

    std::cout << gaini << " " << oi << std::endl;


    return 0;
}
