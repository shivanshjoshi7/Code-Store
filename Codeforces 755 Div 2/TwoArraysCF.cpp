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
        ll n;
        cin>>n;
        vector<ll> a;
        vector<ll> b;
        for(ll i=0; i<n; i++)
            {ll x; cin>>x; a.pb(x);}
        for(ll i=0; i<n; i++)
            {ll x; cin>>x; b.pb(x);}

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll ans=1;
        for(ll i=0; i<n; i++)
        {
            if(b[i]==a[i] || b[i]-a[i]==1)
                continue;
            ans=0;
            break;
        }
        ans==1?cout<<"YES":cout<<"NO";
        cout<<endl;


    }
    return 0;
}