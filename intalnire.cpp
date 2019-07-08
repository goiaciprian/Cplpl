//intalnire.cpp 40 -- 50
#include <iostream>
using namespace std;

long long a, b, dif, mij, obsA, obsB, obsT, i;

int main()
{
    cin >> a >> b;
    if (a > b)
        dif = a - b;
    else
        dif = b - a;

    mij = dif / 2;

    if (mij % 2 == 0)
        obsA = (mij / 2) * (1 + mij);
    else
        obsA = mij * ((1 + mij) / 2);

    if (dif % 2 == 0)
        obsT = 2 * obsA;
    else
    {
        if ((mij + 1) % 2 == 0)
            obsB = ((mij + 1) / 2) * (2 + mij);
        else
            obsB = ((2 + mij) / 2) * (1 + mij);

        obsT = obsA + obsB;
    }

    cout << obsT;

    return 0;
}