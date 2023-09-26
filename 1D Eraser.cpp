#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,k;
    cin>>t;
    while(t--)
    {
        int tmp=0;
        string a;
        cin>>n>>k;
        cin>>a;
        for(int i = 0; i<n; i++)
        {
            if(a[i]=='B')
            {
                i=i+k-1;
                tmp++;
            }
        }
        cout<<tmp<<endl;
    }
}
