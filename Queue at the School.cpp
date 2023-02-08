#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    char s[1000],a[1000];
    cin>>n;
    cin>>t;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }


    for(int i=0; i<t; i++)
    {

        for(int j=0; j<n; j++)
        {
            if(s[j]=='B' && s[j+1]!='\0' && s[j+1]=='G')
            {
                a[j]=s[j+1];
                a[j+1]=s[j++];
            }
            else
            {
                a[j]=s[j];
            }
        }

        for(int j=0; j<n; j++)
        {
            s[j]=a[j];
        }
    }


    for(int i=0; i<n; i++)
    {
        cout<<a[i];
        //printf("%d ",a[i]);

    }

}
