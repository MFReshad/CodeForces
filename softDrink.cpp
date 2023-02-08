#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,Nl,Np,A,B,C;
    int result;
    cin>>n>>k>>l>>c>>d>>p>>Nl>>Np;
    A=(k*l)/Nl;
    B=c*d;
    C=p/Np;
    cout<<A<<"\n"<<B<<"\n"<<C<<"\n";
    result=std::min({A,B,C})/n;
    cout<<result;
}
