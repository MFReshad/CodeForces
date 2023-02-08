#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x=0;
    cin>>n;
    char a[1000][10];
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(x==0 && a[i][j]==79 && a[i][j+1]==79)
            {
                x++;
                a[i][j]='+';
                a[i][j+1]='+';
            }
        }
    }
    if(x>0)
    {
        cout<<"YES\n";
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }

    }
    else
        cout<<"NO";
}
