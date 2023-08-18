#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,H;
    vector <int> h;
    cin>>t;
    while(t--)
    {
        int ct=0;
        cin>>n>>m>>k>>H;

        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            h.push_back(a);
        }

        for(int i=0; i<n; i++)
        {
            int temp = abs(H-h[i]);
            if(temp<(m*k) && temp%k==0 && temp>0)
            {
                ct++;

            }
        }
        h.clear();
        cout<<ct<<endl;
    }
}
