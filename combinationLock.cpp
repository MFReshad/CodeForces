#include<bits/stdc++.h>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    long n,sum=0;
    cin>>n;
    string a,b;
    long c[10000];
    cin>>a;

//    int x = strlen(a);
    cin>>b;
    for(long i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            c[i]= a[i]-b[i];
            //  cout<<a[i]-b[i]<<"\n";
            if(a[i]-b[i]>5)
            {
                c[i]=b[i]+10-a[i];
            }
        }
        else
        {
            c[i]= b[i]-a[i];
            // cout<<a[i]-b[i]<<"\n";
            if(b[i]-a[i]>5)
            {
                c[i]=a[i]+10-b[i];
            }
        }

    }
    for(long i=0;i<n;i++)
    {
        sum+=c[i];
    }
cout<<sum;
}
