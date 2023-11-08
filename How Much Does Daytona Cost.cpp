#include<bits\stdc++.h>
using namespace std;
const int N = 2e5+10;
long long a[N];
long long n,m,k;
int main()
{
	int t;
	cin >>t;
	for(int i=1; i<N; i++)
	{
		a[i]=a[i-1]+i;
	}
	while(t--)
	{
		cin >> n >> m >>k;
		long long sum1=0,sum2=0;
		sum1=a[m];
		sum2=a[n]-a[n-m];
		if(k>=sum1&&k<=sum2) cout <<"YES" <<endl;
		else cout << "NO" <<endl;
	}
}
