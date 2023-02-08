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

        double x = log2(n);
        int y = (int)x;
        if (x == y || n<3)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}



