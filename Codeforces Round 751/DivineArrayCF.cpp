#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	unordered_map<int,int> map;
	while(t--)
	{
		int n;
		cin>>n;

		unordered_map<int,int> map;

		int vec[n+1][n+1];

		for(int i=0,j=1; j<=n; j++)
		{
			cin>>vec[i][j];
			map[vec[i][j]]++;
		}

		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				vec[i][j]=map[vec[i-1][j]];
			}
			
			map.clear();
			for(int j=1; j<=n; j++)
			{
				map[vec[i][j]]++;
			}
		}

		/*
		for(int i=0; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				cout<<vec[i][j]<<" ";
			}
			cout<<"\n";
		}
		*/

		int q;
		cin>>q;
		int ans;
		while(q--)
		{
			
			int a,k;
			cin>>a>>k;
			
			if(k<=n)
				ans=vec[k][a];
			else
				ans=vec[n][a];
			cout<<ans<<"\n";	

				
		}
	}
}