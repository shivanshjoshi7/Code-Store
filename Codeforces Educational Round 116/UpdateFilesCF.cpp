// https://codeforces.com/contest/1606/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;

		long long int i=1;
		long long int sum=0;
		long long int count=0;
		while(i<=k && sum<n-1)
		{

			sum+=i;
			count++;
			i*=2;

		}
		if(sum>=n-1)
		{
			cout<<count<<endl;
		}
		else
		{
			if(((n-1)-sum)%k==0)
			{
				count=count+((n-1)-sum)/k;
			}
			else
			{
				count=count+1+((n-1)-sum)/k;
			}
			cout<<count<<endl;
		}


	}
}
