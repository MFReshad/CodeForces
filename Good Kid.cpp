#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    vector <int> v;
    int a;
    cin>>t;
    while(t--)
    {
        int m =1;
        cin>>n;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        v[0]=v[0]+1;
        for(int i=0;i<v.size();i++)
        {
            m= m*v[i];
        }
        v.clear();
        cout<<m<<endl;
    }
}
