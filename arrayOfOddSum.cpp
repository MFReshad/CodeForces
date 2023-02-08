#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,a[10000],i,j,b[10000],sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=0;
        cin>>m;
        for(j=0;j<m;j++)
        {
            cin>>a[j];
            sum+=a[j];

        }
        if(sum%2==0)
            b[i]=1;
        else
            b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}



