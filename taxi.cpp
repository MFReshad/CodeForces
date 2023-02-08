#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,coun=0;
    int a[100000];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    int temp= 0;

    for(int i=0; i<n; i++)
    {
        temp += a[i];
        if(temp%4==0)
        {
            coun++;
            a[i]=0;
        }
        else
        {
            for(int j=n-1; j>i; j--)
            {
                temp += a[j];
                a[j]=0;
                if(temp%4==0)
                {
                    coun++;
                    break;
                }
            }
        }
    }
    cout<<coun;
//    for(int i=0; i<n; i++)
//    {
//        cout<<a[i];
//    }
//    for(int i=n-1; i>-1; i--)
//    {
//        printf("A\n");
//        if(a[i]!=0)
//        {
//            printf("B\n");
//            if(a[i]<4)
//            {
//                printf("C\n");
//                for(int j=0; j<i; j++)
//                {
//                    printf("D\n");
//                    if(a[i]+a[j]==4)
//                    {
//                        printf("E\n");
//                        a[i]=0;
//                        a[j]=0;
//                        coun++;
//                    }
//                    else
//                    {
//                        int temp=a[i];
//                        printf("H\n");
//                        while(temp<4 && j<i)
//                        {
//                            temp = temp+a[j];
//                            printf("I %d %d %d\n",i,j,temp);
//
//                            a[j]=0;
//                            j++;
//                            //i--;
//                        }
//                        a[i]=0;
//                        coun++;
//                        j--;
//                        i--;
//                    }
//                }
//            }
//            else
//            {
//                printf("F\n");
//                a[i]=0;
//                coun++;
//            }
//        }
//
//    }
//    for(int i=0; i<n; i++)
//    {
//        if(a[i]!=0)
//        {
//            printf("G\n");
//            coun++;
//        }
//    }
//    cout<<coun<<"\n";
//    for(int i=0; i<n; i++)
//    {
//        cout<<a[i];
//
//    }
}
