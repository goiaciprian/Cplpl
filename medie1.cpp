#include <iostream>
using namespace std;

int main()
{
int x, y, z, m;
cin>>x>>y>>z;
m = (x+y+z)*100/3;
cout<<m/100<<"."<<m%100;
if(m%100%10==0)cout<<0;
return 0;
}