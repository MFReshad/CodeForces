#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        vector<ll> v;
        cin>>n;
        string s;
        cin>>s;
        ll total=0;
        ll cng=0;
        for(ll i=0;i<n;i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                  cng++;
                  total+=R;
                  v.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else
            {
                if(R<L)
                {
                  cng++;
                  total+=L;
                  v.push_back(L-R);
                }
                else
                {
                    total+=R;
                }
            }
        }

        vector <ll> ans(n);
        for(ll i = cng-1;i<n;i++)
        {
            ans[i]=total;
        }
        sort(v.begin(),v.end(),greater<int>());

        for(ll i=cng-2;i>-1;i--)
        {
            total-=v.back();
            ans[i]=total;
            v.pop_back();
        }

        for(ll i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        ans.clear();
        v.clear();
    }

}
