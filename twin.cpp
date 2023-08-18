#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,m=0;
    int j;
    int a[100];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    int mid = sum/2;

    sort(a,a+n, greater<int>());
    for(j = 0 ; j<n;j++)
    {
        m+=a[j];
        if(m>mid)
            break;
    }

    cout<<j+1;
}
