#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n,coun=0;
    int a[100000];
    cin>>n;
    int m =0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n, greater<int>());

    for(int i=0; i<n; i++)
    {
        if(a[i]==4)
        {
            coun++;
            a[i]=0;
        }

        else if(a[i]==3)
        {
            int temp3=0;
            int j=n-1;
            while(j>i)
            {
                if(a[j]==1 && a[j]+a[i]==4)
                {
                    coun++;
                    a[i]=0;
                    a[j]=0;
                    temp3 = 1;
                    break;
                }
                j--;
            }
            if(temp3==0)
            {
                coun++;
            }
        }

        else if(a[i]==2)
        {
            int temp2=0;

            if( a[i+1]==2 && a[i+1]+a[i]==4)
            {
                coun++;
                a[i]=0;
                a[i+1]=0;
                temp2 = 1;
            }
            if(temp2==0)
            {
                int s=2;
                int j=i+1;
                while(j<n)
                {
                    if( a[j]==1 && s<=4)
                    {
                        s+= a[j];
                        a[i]=0;
                        a[j]=0;
                    }
                    j++;
                }
                coun++;

            }

        }
        else if(a[i]==1)
        {
            m = m + a[i];
            a[i]=0;
        }

    }

    float on =(float)m;
    int last =ceil(on/4);
    coun = coun+last;
    cout<<coun;
}


