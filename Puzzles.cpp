#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100],best = 1000;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a, a+m);

    for(int i= 1;i<m-n;i++)
    {
        best = min(best, a[i+n-1]- a[i]);
    }
    if(best==1000)
        best = 0;

    cout<<best;

}
