#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[1000];
    cin>>a;
    int i,j,min;
    for(i=0; i<strlen(a); i++)
    {
        if(a[i]=='+')
            {
                i++;
            }
        for(j=i+2; j<strlen(a); j++)
        {
            if(a[j]=='+')
            {
                j++;
            }
            min=a[i];
            if(min>a[j])
            {
                a[i]=a[j];
                a[j]=min;
            }
         //   else
           //     break;
        }
    }
        cout<<a;
}
