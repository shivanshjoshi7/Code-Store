#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;

		int size=s.length();
		string a,b;
		char x=s[0];
		for(int i=1; i<size; i++)
		{
			if(s[i]<x)
				x=s[i];


		}
		int cnt=0;
		for(int i=0; i<size; i++)
		{
			if(s[i]==x && cnt==0)
			{
				cnt=1;
				continue;
			}
			b+=s[i];
		}
		a+=x;

		cout<<a<<" ";
		cout<<b<<"\n";

	}
}