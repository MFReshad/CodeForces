#include <bits/stdc++.h>
using namespace std;
bool solve(long long  n,long long  k,long long  x)
{
    long long sum=0;
    sum=(k <= n && k * (k + 1) / 2 <= x && k * (2 * n - k + 1) / 2 >= x);
//    while(k--)
//    {
//        sum=sum+n;
//        n--;
//    }
    if(k <= n && k * (k + 1) / 2 <= x && k * (2 * n - k + 1) / 2 >= x)
        return 1;
    else
        return 0;
}
int main()
{
    int t;
    cin>>t;
    long long n,k,x;
    while(t--)
    {
        cin>>n>>k>>x;
        long long sum=0;
        if(k <= n && k * (k + 1) / 2 <= x && k * (2 * n - k + 1) / 2 >= x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
