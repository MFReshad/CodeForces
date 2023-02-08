#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char a[100],b[100];
    gets(a);
   /* for(i=0;i<strlen(a);i++)
    {
        b[i]=a[i];
    }
    */
    strcpy(b,a);
    if(a[0]>96 && a[0]<123)
    {
        for(i=1; i<strlen(a); i++)
        {
            if(a[i]>96 && a[i]<123)

            {
                puts(b);
                exit(0);
            }
            else if(a[i]>64 && a[i]<91)
            {
                a[i]+=32;
            }

        }
        a[0]-=32;
        puts(a);

    }
    else if(a[0]>64 && a[0]<91)
    {
        for(i=1; i<strlen(a); i++)
        {
            if(a[i]>96 && a[i]<123)

            {
                puts(b);
                exit(0);
            }
            else if(a[i]>64 && a[i]<91)
            {
                a[i]+=32;
            }

        }
        a[0]+=32;
        puts(a);


    }

}
