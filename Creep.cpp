#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int n=a+b;
        for(int i=0;i<n;i++)
        {
            if(a-- && a>=0)
            {
                cout<<0;
            }
            if(b>=0 && b--)
            {
                cout<<1;
            }
        }
        cout<<endl;
    }
}
