#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i,j,n=0,m=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {

        if(a[i]>64 && a[i]<91)
            n++;
        else
            m++;
    }

    for(i=0;i<strlen(a);i++)
    {
        if(n>m)
        {
            if(a[i]>96 && a[i]<123)
                a[i]=a[i]-32;
        }
        else if(n==m)
        {
            if(a[i]>64 && a[i]<91)
                a[i]=a[i]+32;
        }
        else if(n<m)
        {
            if(a[i]>64 && a[i]<91)
                a[i]=a[i]+32;
        }
    }
    puts(a);
}
