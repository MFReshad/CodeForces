#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,a,b;
    vector<pair<int,int>> v;
    cin>>n;
    while(n--)
    {
        int max=0;
        int temp = -1;
        cin>>t;
        for(int i=0; i<t; i++)
        {
            cin>>a>>b;
            v.push_back({a,b});
            if(a<11 && b>max)
            {
                max=b;
                temp=i;
                //cout<<max<<endl;
            }

        }
        //cout<<" the out put"<< v[temp].first<<"  "<<v[temp].second <<endl;
        cout<<temp+1<<endl;
        v.clear();
    }

}
