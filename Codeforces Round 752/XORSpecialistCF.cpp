#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n+1];
		for(ll i=1; i<=n; i++)
		{
			cin>>arr[i];
		}

		if(n%2==0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		ll flag=1;
		for(ll i=1; i<n; i++)
		{
			if(arr[i]>=arr[i+1])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		flag=1;
		for(ll i=1; i<n; i++)
		{
			if(arr[i]>=arr[i+1])
			{
				flag=0;
				break;
			}
		}

		if(flag)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	return 0;
}