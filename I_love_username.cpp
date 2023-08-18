#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,n,coun=0,max=0,min=0;
    cin>>n>>temp;
    max=temp;
    min=temp;
    for(int i=1; i<n; i++)
    {
        cin>>temp;
        if(temp>max)
        {
            max=temp;
            coun++;
        }
        if(temp<min)
        {
            min=temp;
            coun++;
        }
    }
    cout<<coun;
}

