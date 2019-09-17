/* Udemy course section 8 operators challange;

Program care da rest pentru o suma de bani.

Exemplu

In >> 150 bani;

1 leu = 100 bani;
50 bani;
10 bani;
5 bani;
1 ban;

Out << 1 leu + 50 bani;

Verificare pentru 100 50 10 5 1;

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int suma {}, leu {}, m50 {}, m10 {}, m5 {}, m {};
    int temp;

    cin >> suma;

    if ( suma >= 100 ) { // adauga leii
        leu = suma / 100;
        temp =leu * 100;
        suma -= temp;
        temp = 0;
    } 

    if ( suma >= 50 ) { // adauga monedele de 50 de bani
        m50++;
        suma -= 50;
    }

    if ( suma >= 10 ) { // adauga monedele de 10 bani
        m10 = suma / 10;
        temp = m10 * 10;
        suma -= temp;
        temp = 0;
    }

    if ( suma >= 5 ) { // adauga monedele de 5 bani 
        m5++;
        suma -= 5;
    } else {
        m = suma;
    }

    delete &temp;

    cout << "Lei: " << leu << "\n"
         << "Monede de 50: " << m50 << "\n"
         << "Monede de 10: " << m10 << "\n"
         << "Monede de 5 : " << m5 << "\n"
         << "Monede de 1 : " << m << "\n";

    return 0;
}
