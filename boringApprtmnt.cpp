#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],b[10000],i;
cin>>n;
for(i=0; i<n; i++)
{
    cin>>a[i];
    if(a[i]%1111==0)
        b[i]=(a[i]/1111)*10;
    else if(a[i]%111==0)
        b[i]=(a[i]/111)*10-4;
    else if(a[i]%11==0)
        b[i]=(a[i]/11)*10-7;
    else if(a[i]%1==0)
        b[i]=(a[i]/1)*10-9;

}
for(i=0;i<n;i++)
{
    cout<<b[i]<<"\n";
}
}
