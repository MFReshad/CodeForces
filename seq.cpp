#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x=0,y=0,z=0,A[1000],B[1000],C[1000];
    int a[100],sum=0,res=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        cout<<sum<<"\n";
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            A[x]=a[i];
            x++;

        }
        else if(a[i]==2)
            {
                B[y]=a[i];
                y++;
            }
        else if(a[i]==3)
            {
                C[z]=a[i];
                z++;
            }
    }

    int m;

    if(x<y && x<z)
       m=x;
    else if(y<z && y<x)
       m=y;
    else if(z<x && z<y)
        {m=z;}

    cout<<m<<"\n";

    for(i=0;i<m;i++)
    {
        cout<"a\n";
        res=A[i]+B[i]+C[i];
    }
    cout<<res<<"\n";
    cout<<sum-res;
}



