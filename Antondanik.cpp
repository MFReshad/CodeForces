#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    int i,x=0,z=0;
    char a[1000000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=='A')
            x++;
        else if(a[i]=='D')
            z++;
    }
    if(x>z)
        cout<<"Anton";
    else if(z>x)
        cout<<"Danik";
    else if(z==x)
        cout<<"Friendship";

}
