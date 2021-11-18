#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll u,v;
        cin>>u>>v;
        ll x=-u*u;
        ll y=v*v;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}