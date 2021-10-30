#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n+1];
		ll max=0;
		for(ll i=1; i<=n; i++)
		{
			cin>>arr[i];

			if((arr[i]-i)>max)
				max=arr[i]-i;


		}
		cout<<max<<endl;

	}
}