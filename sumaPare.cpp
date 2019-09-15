/* sumaPare.cpp -- PbInfo -- ;

Cerinţa
Să se scrie un program care citește numărul natural n și determină suma S=2+4+..+(2n).

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieşire
Programul afișează pe prima linie a ecranului mesajul Suma este S, unde S reprezintă suma calculată.

*/

#include <iostream>
using namespace std;

int main() {
    
    int a {0};
    cin >> a;

    cout << a*(a+1);
    
    return 0;
}   
