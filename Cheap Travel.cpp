#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int mn1 = ceil(n*a);
    int mn2 = n * ceil(float(b)/m);
    if(mn1<mn2)
        cout<<mn1<<endl;
    else
        cout<<mn2;
}
