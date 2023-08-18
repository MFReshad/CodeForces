#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[10][10];

    while(n--)
    {
        char b[100]={'\0'};
        int k=0;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
                if(a[i][j] != '.')
                    b[k++]=a[i][j];
            }
        }
        cout<<b<<endl;
        //b.clear();
    }
}
