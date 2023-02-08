#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,x=0,y=0;
    cin>>n;
    int a[1000],b[1000];
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>a[i];
    }

    cin>>q;

    for(int i=p;i<p+q;i++)
    {
        cin>>a[i];
    }
    sort(a,a+(p+q));
    for(int i=0;i<p+q;i++)
    {
        if(a[i]!=a[i+1])
            x++;
    }

    if(x==n)
            {
                cout<<"I become the guy.";
            }
        else
            cout<<"Oh, my keyboard!";
}
