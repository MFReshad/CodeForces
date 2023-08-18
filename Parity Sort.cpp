#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ct=0;
        cin>>n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        for(int i=0; i<n; i++)
        {
            //cout<<"A "<<endl;
            for(int j=i+1; j<n; j++)
            {
              //  cout<<"B "<<endl;
                if(v[i]>v[j] && (v[i]%2==0 && v[j]%2==0) || (v[i]%2!=0 && v[j]%2!=0) )
                {
                  //  cout<<"C "<<endl;
                    ct++;
                    int temp = v[i];
                    v[i]=v[j];
                    v[j]=temp;
                }
            }
        }
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl<<ct<<" <----- "<<endl;

    }

}
