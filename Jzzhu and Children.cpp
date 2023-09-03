#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    vector <pair<int,int>> v;
    for(i =0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>m)
        {
            v.push_back({i+1, a});
        }
    }
    int x,y;
    int t=v.size();
    if(t==0)
    {
        cout<<n;
    }
    else
    {
        for (int i = 0; i < t; i++)
        {

            x = v[i].first;
            y = v[i].second;
            y = y -m;
            if(y>0)
            {
                v.push_back({x,y});
                t++;
            }

        }
        cout<<x<<endl;
    }

}

