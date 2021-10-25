//https://www.codechef.com/START12C/problems/MAKEDIV3

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==1)
			cout<<"3"<<endl;
		else
		{
			char arr[n];
			arr[0]='1';
			for(int i=1;i<n-1; i++)
			{
				arr[i]='0';
			}
			arr[n-1]='5';
			for(int i=0; i<n; i++)
			{
				cout<<arr[i];
			}
			cout<<endl;
		}
	}
}
