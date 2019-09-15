/* Snorocos.cpp -- PbInfo -- ;

Un număr natural nenul n se numește norocos dacă pătratul 
lui se poate scrie ca sumă de n numere naturale consecutive. 
Exemplu:

3 deoarece 3 * 3 = 2 + 3 + 4 -> x = 3/2 + 1 = 2 -> for (i=n; i<n; i++)

7 deoarece 7 * 7 = 4 + 5 + 6 + 7 + 8 + 9 + 10 ^^^^^

Cerința
Se dă un număr natural n. Dacă numărul este norocos afișați 
cele n numere consecutive care adunate dau pătratul acestuia.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Daca n este norocos, programul va afișa pe ecran cele n numere
 consecutive care adunate dau n * n, separate prin spații.
  In caz contrar, programul va afișa mesajul NU ESTE NOROCOS

*/

#include <iostream>
using namespace std;

int main() {
    
    long long n;

    cin >> n;
    if (n%2==0) {
        cout << "NU ESTE NOROCOS";
    }
    else {

        long long x = (n/2) + 1;
        for(; x < n*n; x++) cout << x << " ";

    }

    return 0;
}
