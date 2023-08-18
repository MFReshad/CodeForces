#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int x, int low, int high)
{

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;

        if (array[mid] < x)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
            if(array[high]<x)
                return high;
        }
    }

    return -1;
}

int main()
{
    int n,q,mn=100,mx=0,lf=0,rt=0;
    int a[1000],b[1000];

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        {
            mx = a[i];
            rt++;
        }
        if(a[i]<mn)
        {
            mn = a[i];
            lf++;
        }
    }
    sort(a,a+n);
    int md = (mx+mn)/2;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        //int cnt=0;
        cin>>b[i];
        int result = binarySearch(a, b[i], 0, n);
        if (result == -1)
            printf("%d\n",0);
        else
            printf("%d\n", result+1);
    }
}
