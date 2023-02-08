#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long ar[100000];
    cin>>n;
    long a,b;
    for(long i=0;i<n;i++)
    {
        cin>>a>>b;
        ar[i]=a+b;
    }
    for(long i=0;i<n;i++)
    {
        cout<<ar[i]<<"\n";
    }
}
