#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x,m;
    int a[100000],b[100000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //m=a[0];
    for(int i = n-1; i>-1;i--)
    {
        a[i]=a[i-1];
        if(a[i]==0)
        {
            a[i]=a[i+1]-1;
            if(a[i]==0)
            {
                a[i]=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
