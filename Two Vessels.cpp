#include<bits/stdc++.h>
using namespace std;
int solve(int x,int y, int z)
{
    int mid,temp=0;
    mid = x+y;
    if(mid%2==0)
    {
        mid = mid/2;
    }
    else
        mid = (mid-1)/2;
    if(y>x)
    {
        swap(x,y);
    }
    while(x!= mid)
    {
        x= x-mid;
        temp++;
    }
    return temp;

}
int main()
{
    int t;
    int a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a==b)
            cout<<0<<endl;
        else
        {
            int mid,temp=0;
            mid = a+b;
            if(mid%2==0)
            {
                mid = mid/2;
            }
            else
                mid = (mid-1)/2;
            if(b>a)
            {
                swap(a,b);
            }
            while(a!= mid)
            {
                a= a-c;
                b = b+c;
                temp++;
                if(a-b<0)
                {
                    //cout<<"A ";
                    break;
                }
            }
            cout<<temp<<endl;
        }
    }

}

