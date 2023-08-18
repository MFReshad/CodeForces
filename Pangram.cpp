#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char a[1000];
    char s[100]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int temp=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        a[i]=tolower(a[i]);
        for(int j=0; j<26; j++)
        {
           // cout<<s[j]<< " ";
            if(a[i]==s[j])
            {
                //cout<<j<<" "<<s[j]<< "\n ";
                s[j]='0';
            }
        }

    }
   // cout<<"\n";
    for(int j=0; j<26; j++)
    {
        //cout<<s[j]<< " ";
        if(s[j]>='a' && s[j]<='z')
        {
            temp++;
            break;
        }
    }

    if(temp==0)
        cout<<"YES";
    else
        cout<<"NO";

}
