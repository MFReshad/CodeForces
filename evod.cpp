#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double n;
    long i,k,a[100000],b[10000],p=1,q=0;

    cin>>n>>k;
    double w=ceil(n/2);
    long e=w;

    for(i=0; i<n; i++)
    {
        a[i]=p;
        p++;
        if(a[i]%2!=0)
        {
            b[q]=a[i];
            q++;
        }

        else
        {
            b[e]=a[i];
            e++;
        }

    }

    cout<<b[k-1];



}


