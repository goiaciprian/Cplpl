/*CifP_CifI.cpp -- PbInfo -- ;

Cerința
Se dau 2 numere de exact 2 cifre, dacă numerele au aceeași paritate se va afișa numărul total de cifre pare din cele două numere altfel dacă au parităti diferite atunci se afisează numărul total de cifre impare din cele două numere.

Date de intrare
Programul citește de la tastatură 2 numere, separate prin spații.

Date de ieșire
Programul va afișa pe ecran numărul de cifre pare/impare conform cerinței.

 */

//brainly -- 100???;
#include <iostream>
using namespace std;
int main()
{
    int a,b,cnt;
    cin >> a >> b;
    cnt=0;
    if ((a/10)%2==0)
    cnt++;
    if((a%10)%2==0)
    cnt++;
    if ((b/10)%2==0)
    cnt++;
    if((b%10)%2==0)
    cnt++;

    if(a%2==b%2)
    cout << cnt;
    else
    cout <<4-cnt;
} 

// Moi -- 80 pct;
// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int x, X, u, U, s, S, total=0;
//     cin >> x >> X;

//     if( (x<10) && (X<10) && (x>100) && (X>100) ) return 0;

//     u = x % 10;
//     U = X % 10;
//     s=x/10;
//     S=X/10;

//     if ((x % 2 == 0) && (X % 2 == 0))
//     {
//         total = 2;
//         if (s%2==0) total++;
//         if (S%2==0) total++;
        
//         cout << total;
//         return 0;
//     }
//     else
//     {
//         if(u%2!=0) total++;
//         if(U%2!=0) total++;
//         if(s%2!=0) total++;
//         if(S%2!=0) total++;
    
//         cout << total;
//         return 0;
//     }
// }