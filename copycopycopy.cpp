#include<bits/stdc++.h>
using namespace std;
int main()
{
    long temp,n,m[10000],i,j,a[10000][10000],l;
    cin>>n;
    for(i=0; i<n; i++)
    {

        cin>>l;
        m[i]=l;
        for(j=0; j<l; j++)
        {
            cin>>a[i][j];
        }

        //sort(a,a+l);
    }

    for(i=0; i<n; i++)
    {
        //for(j=0; j<l; j++)
        for(j=0; j<m[i]; j++)
        {
            if(a[i][j]>a[i][j+1])
            {
                a[i][j]=temp;
                a[i][j]=a[i][j+1];
                a[i][j+1]=temp;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}
