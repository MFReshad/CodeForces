
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mxQ=0,mnP=0,tmp=0;
    int a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a==b)
            continue;
        if(mxQ==0 && mnP==0)
        {
            mnP=a;
            mxQ=b;
            tmp++;
            continue;
        }

        if(a>mnP && b<mxQ)
        {
            tmp = -1;

            break;
        }
        else if(a<mnP && b>mxQ)
        {
            tmp = -1;
        }
        else
        {
            tmp=0;
            mnP=a;
            mxQ=b;
        }


    }

    if(tmp!=-1)
        cout<<"Poor Alex"<<endl;
    else
        cout<<"Happy Alex"<<endl;
}
