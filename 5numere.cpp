#include <iostream>
#include <limits.h>

int cinciElem[5];
int prim, doi, trei, rezultat;

// void caLaProsti(int array[])
// {
//     int i, prim, doi, trei;

//     trei = doi = prim = INT_MIN;
//     for (i = 0; i < sizeof(array)/sizeof(array[0]); i++)
//     {
//         if (array[i] > prim)
//         {
//             trei = doi;
//             doi = prim;
//             prim = array[i];
//         }
//         else if (array[i] > doi)
//         {
//             trei = doi;
//             doi = array[i];
//         }
//         else if ( array[i] > trei)
//         {
//             trei = array[i];
//         }
//     }
//     treiMaxime[0] = prim;
//     treiMaxime[1] = doi;
//     treiMaxime[2] = trei;
// }

void LOG(int param[])
{
    for (unsigned int i = 0; i < sizeof(cinciElem)/sizeof(cinciElem[0]); i++)
    {
        std::cout<<param[i]<<std::endl;
    }
}

int main()
{
        trei = doi = prim = INT_MIN;
    for (int z; z < 5; z++){
        int x;
        std::cin >> x;
        cinciElem[z] = x;
    }
    std::cout << std::endl;
    for (int r; r < 5; r++) // sizeof(cinciElem)/sizeof(cinciElem[0]) -- > len(array)
    {
        if (cinciElem[r] > prim)
        {
            trei = doi;
            doi = prim;
            prim = cinciElem[r];
        }
        else if (cinciElem[r] > doi)
        {
            trei = doi;
            doi = cinciElem[r];
        }
        else if (cinciElem[r] > trei)
        {
            trei = cinciElem[r];
        }
    }
    rezultat = prim + doi + trei;
    std::cout << rezultat << std::endl;
    return 0;
}