

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>n;

        if(n%2!=0 && n>1)
        {
            cout<<"YES\n";
        }
        else
        {
            //long  j=n%1000;

            if(n%3==0)
            {
                cout<<"YES\n";
            }
            else
            {
                int j=0;
                int temp=0;
                while(j<20)
                {
                    if(n%(6*j+1)==0 || n%(6*j-1)==0 )
                    {
                        cout<<"YES\n";
                        temp=1;
                        break;
                    }
                    j++;
                }
                if(temp==0)
                    cout<<"NO\n";
//                int o=n/2;
//
//                int p=o/2;
//                int q=p/2;
//                int r=q/2;
//
//                if(o%2!=0 && o>2 )
//                {
//                    cout<<"YES\n";
//                }
//                else
//                    cout<<"NO\n";
            }
        }
    }
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    for(int i=0; i<t; i++)
    {

        cin>>n;

        if(n%2!=0 && n>1)
        {
            cout<<"YES\n";
        }
        else
        {
            //long  j=n%1000;

            if(n%3==0 || n%5==0)
            {
                cout<<"YES\n";
            }
            else
            {
                int j=2;
                int temp=0;
                while(j<32)
                {
                    float z =(float)n/(long)pow(2,j);
                    if(z==1)
                    {
                        //cout<<j<<" e\n";
                        temp=1;
                        break;
                    }
                    j++;
                }
                if(temp==1 || n<3)
                    cout<<"NO\n";

                else
                   cout<<"YES\n";
            }
        }
    }
}

*/

