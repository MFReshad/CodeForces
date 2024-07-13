#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l;
    int a;
    vector <int> v;
    cin>>n>>l;
    float mx=0.00;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i+1]-v[i]>mx)
        {
            mx=v[i+1]-v[i];

        }
    }
    //cout<<v.front()<<" "<<v.back()<<endl;
    if(v.front()!=0 && v.front()-0>mx/2)
    {
        mx=v.front()-0;

    }
    else if(v.back()!=l && l-v.back()>mx/2)
    {
        mx=l-v.back();

    }
    else
    {
        mx = mx/2;

    }


    cout<<float(mx)<<endl;




}

