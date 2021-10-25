#include<bits/stdc++.h>
using namespace std;

int KS(int wt[], int val[], int W, int n, vector<vector<int>>&dp)
{
	
	if(n==0 || W==0)
		return 0;
	if(dp[n][W]!=-1)
		return dp[n][W];
	if(wt[n-1]<=W)
		return dp[n][W]=max(val[n-1]+KS(wt,val,W-wt[n-1],n-1,dp),KS(wt,val,W,n-1,dp));
	if(wt[n-1]>W)
		return dp[n][W]=KS(wt,val,W,n-1,dp);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int x,y,z;
		cin>>x>>y>>z;

		int wt[60];
		for(int i=0; i<60; i++)
		{
			if(i<20)
				wt[i]=a;
			else if(i<40)
				wt[i]=b;
			else if(i<60)
				wt[i]=c;
		}
		int val[60];
		for(int i=0; i<60; i++)
		{
			if(i<20)
				val[i]=x;
			else if(i<40)
				val[i]=y;
			else if(i<60)
				val[i]=z;
		}
		int W=240;
		int n=60;
		vector<vector<int>> dp(61,vector<int>(241,-1));
		int score=KS(wt,val,W,n,dp);
		cout<<score<<endl;

	}
}