#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200];
    int odd=0,even=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    //temp=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0 && even==1)
            cout<<i+1;
        else if(a[i]%2!=0 && odd==1)
            cout<<i+1;
    }
}
