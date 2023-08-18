#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum = 0;
        int n,a;
        cin>>n;
        while(n--)
        {
            cin>>a;
            sum = sum+a;
        }

        if(sum%2==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}



