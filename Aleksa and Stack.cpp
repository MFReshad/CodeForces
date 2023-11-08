#include<bits\stdc++.h>
using namespace std;
const int N = 2e5+10;
int n,m,flag;
int a[N];
int cnt;
int main()
{

    cin >> m;
    a[0]=6;
    a[1]=8;
    for(int i=2; i<N; i++)
    {
        a[i]=a[i-1]+1;
        while (3*a[i]%(a[i-1])+(a[i-2])==0)
        {
            a[i]++;
        }

    }
    while(m--)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cout << a[i] <<' ';
        }
        cout << endl;
    }

}
