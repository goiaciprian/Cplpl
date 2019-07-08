#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    int n,x;
    float produs=1;
    cin >> n;
    if(n>1 && n<=10){
        for(int i=1; i<=n; i++){
            cin>>x;
            produs=produs*pow(x,1.0 / n);
        }
        cout  << fixed << setprecision(2) << produs;
        return 0;
    } else {
        return 1;
    }
}