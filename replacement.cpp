#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    vector<int> v,b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    int temp =0;
    if(n==1)
    {
        temp=1;
        if(v[n-1]==1)
        {
            v[0]=2;
        }
        else
            v[0] = 1;
    }
    else
    {
        for (int i = n - 1; i >= 1; i--)
        {
            //cout<<"in loop"<<endl;
            if(v[n - 1]==1)
            {
                //cout<<"here"<<endl;
                v[i]=2;
                temp=1;
                break;
            }
            b[i] = v[i-1] ;

        }
        b[0]=1;

    }

    if(temp == 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
