#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[300];
    cin>>a;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
        {
            if(i!=0)
            {
                a[i]=' ';
                a[i+1]='@';
                a[i+2]='@';
            }
            else
            {
                a[i]='@';
                a[i+1]='@';
                a[i+2]='@';
            }
        }
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!='@')
        {
            if(a[i]==' ' && a[i+1]==' ')
            {
                i++;
                //continue;
            }
            else
            {
                cout<<a[i];
            }
        }
    }
}
/*

//tried to remove white space but not worked
    for(int i=0,j=0;i<strlen(a);i++)
    {
        if(a[i]!='@')
        {
            b[j++]=a[i];
        }
    }
    for(int i=0;i<strlen(b);i++)
    {
        if(b[i]==' ' && b[i+1]==' ')
            {
                //cout<<"A\n";
                //i++;
                continue;
            }
            else
            {
                //cout<<"B\n";
                cout<<b[i];
            }
    }
    cout << endl;
}
######    chatGPT   ##### WORKED ----
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[300];
    cin>>a;
    string b = "";
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            i += 2;
            if (b.length() > 0 && b.back() != ' ')
                b += " ";
        }
        else
            b += a[i];
    }
    cout << b << endl;
    return 0;
}

*/
