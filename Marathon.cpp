#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int a,b,c,d;
   cin>>n;
   while(n--)
   {
       int cnt =0;
       cin>>a>>b>>c>>d;
       if(b>a){cnt++;}
       if(c>a){cnt++;}
       if(d>a){cnt++;}
       cout<<cnt<<endl;
   }
}

