#include <iostream>

int n,x[20],use[20];

void afisare_sol() 
{
    for(int i=1;i<=n;i++)
    cout<<x[i]<<" ";
    cout<<endl; 
}

void perm(int k)
{
    int i;  if(k==n+1)
    {
        afisare_sol();
    }
    else  
    {

        for(i=1;i<=n;i++)
        {
            if(!use[i])
                {x[k]=i;use[i]=1;
                perm(k+1);
                use[i]=0;             
                }
        } 
    }
void main() {cout<<"n=";cin>>n; perm(1); } 
    
