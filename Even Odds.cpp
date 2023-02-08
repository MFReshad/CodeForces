#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n,k;
    cin>>n;
    cin>>k;

    if(n%2==0)
    {
        if(k>n/2)
        {
            cout<<(2*k-n);
        }
        else
        {
            cout<<(2*k-1);
        }
    }
    else
    {
        unsigned long long int m= ((n+1)/2);
        if(k>m)
        {
            cout<<(2*k-n-1);
        }
        else
        {
            cout<<(2*k-1);
        }
    }
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    vector<long long> a;
    cin>>n;
    cin>>k;
    for(long long i=1;i<=n;i++)
    {
        a.push_back(i);
    }
    sort(a.begin(), a.end(), [](long long x, long long y){
        if (x % 2 == 0 && y % 2 != 0)
            return false;
        if (x % 2 != 0 && y % 2 == 0)
            return true;
        return x < y;
    });
    cout<<a[k-1];
}
*/

/*my old prob
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    long long a[10000];
    cin>>n;
    cin>>k;
    for(long long i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    long long i=0;
    while(i<n)
    //for(long long i=0;i<n;i++)
    {
        long long j=i;
        while(j<n)
//        for(long long j=i;j<n;j++)
        {
            if(a[j]%2==0 && a[j+1]%2!=0)
            {
                int x=a[j+1];
                a[j+1]=a[j];
                a[j]=x;
            }
            j++;
        }
        i++;
    }

    cout<<a[k-1];
//    for(long long i=0;i<n;i++)
//    {
//        cout<<a[i];
//    }

}
*/
