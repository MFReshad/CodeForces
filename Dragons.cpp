#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int s,n,x,y;
    cin>>s;
    cin>>n;
    int temp= 0;
    while(n--)
    {
        cin >> x >> y;
        v.push_back(make_pair(x, y));

    }

    sort(v.begin(),v.end());



    for(int i=0;i<v.size();i++)
    {
        if(v[i].first<s)
        {
            temp=1;
        }
        else
        {
            temp=0;
            break;
        }
        s=v[i].second+s;
    }

    if(temp==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
