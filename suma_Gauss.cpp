/* suma_Gauss.cpp -- PbInfo -- ;

Cerința
Se citește n număr natural. Calculați suma tuturor numerelor naturale mai mici sau egale cu n.

Date de intrare
Programul citește de la tastatură numărul n, număr natural.

Date de ieșire
Programul va afișa pe ecran numărul S, reprezentând suma numerelor mai mici sau egale cu n.


*/

#include <iostream>
using namespace std;

int main() {
    
    long long a=0;
    cin >> a;

    cout << (a*(a+1))/2;

    return 0;
}
