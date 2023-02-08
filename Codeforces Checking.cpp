#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s = "codeforces";
    char a[100];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        int temp=0;
        for(int j =0 ;j<s.size();j++)
        {
            if(a[i]==s[j])
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }
}
