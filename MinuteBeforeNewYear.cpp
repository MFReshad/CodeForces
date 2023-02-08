#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,t,a[10000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>h>>m;
        t=1440-m-h*60;
        a[i]=t;
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<'\n';
    }
}


