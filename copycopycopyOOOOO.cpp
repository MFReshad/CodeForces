#include<bits/stdc++.h>
using namespace std;
void func(int q)
{
    long i,j,a[100000],l,f;
    f=q;
    q--;
    if(q>=0)
    {
        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a[i];
        }
        sort(a,a+l);
        for(j=0;j<l;j++)
        cout<<a[j]<<" ";
        func(q);
        cout<<"\n";
    }

    //cout<<"P";
}
int main()
{
    int n;
    cin>>n;
    func(n);
}

