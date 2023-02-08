#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,m=10,x=0;;
    int a[1000],b[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<m)
            m=a[i];
    }
    //cout<<m<<"\n";
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]==m)
            {

                b[x++]=j+1;
                m++;
                j=0;
                if(x==n)
                    break;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }

}
