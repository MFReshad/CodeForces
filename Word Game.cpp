
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        vector <string> v[3];
        map < string, int> m;

        for(int i=0; i<3; i++)
        {
            v[i].resize(n);
            for(int j=0; j<n; j++)
            {
                cin>>v[i][j];

                m[v[i][j]]++;
            }
        }

        int a[3]= {0};
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(m[v[i][j]]==1)
                {
                    a[i]+=3;
                }
                else if(m[v[i][j]]==2)
                {
                    a[i]+=1;
                }
            }
        }

        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;

    }

}
