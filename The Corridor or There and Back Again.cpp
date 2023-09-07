#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,d,s;
    cin>>t;
    while(t--)
    {
        int temp = 10000000;
        cin>>n;
        while(n--)
        {
            cin>>d>>s;
            if(s%2!=0)
                s=s+1;
            int mv = (s/2-1)+d;
            if(mv<temp)
                temp =mv;
        }
        cout<<temp<<endl;
    }

}

