#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string s1,s2;

    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s1>>s2;
        int tmp=0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='R' && s2[i]!='R' || s2[i]=='R' && s1[i]!='R')
            {
                tmp++;
                break;
            }
        }
        if(tmp==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
