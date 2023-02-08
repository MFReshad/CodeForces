#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp=0;
    char a[100];
    cin>>a;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='h' && temp==0)
        {
            temp++;
        }
        else if(a[i]=='e' && temp==1)
        {
            temp++;
        }
        else if(a[i]=='l' && temp==2 || temp==3)
        {
            temp++;
        }
        else if(a[i]=='o' && temp==4)
        {
            temp++;
        }
    }

    if(temp==5)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
