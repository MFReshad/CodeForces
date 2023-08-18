
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,coun=0;
    unsigned long long int a[1000][1000];
    cin>>n;
    for(unsigned long long int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>a[i][j];
        }
    }
    for(unsigned long long int i=0; i<n-1; i++)
    {
        if (i + 1 < n)
        {
            if(a[i][0] < a[i+1][0] && a[i][1] > a[i+1][1])
            {
                coun++;
                break;
            }
        }
    }


    if(coun>0)
    {
        cout<<"Happy Alex";
    }
    else
    {
        cout<<"Poor Alex";
    }
}
