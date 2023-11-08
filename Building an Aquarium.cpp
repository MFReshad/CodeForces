#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,x;
    int h;
    cin>>t;
    while(t--)
    {
        int sum = 0;
        int mx=0,nd;
        vector <int> v;
        cin>>n>>x;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            sum +=a;
            if(a>mx)
                mx=a;
            v.push_back(a);

        }
        //int total_place = n*mx;
        sort(v.begin(),v.end());
        for(int i = 0; ; i++)
        {
            if(n>x)
            {
                nd=x+v[0];
                if(nd*n-sum>x)
                {
                    nd=x;
                }
                break;
            }

            if(n*i-sum<=x)
                nd=i;
            else
                break;
        }
        cout<<nd<<endl;
    }
}
