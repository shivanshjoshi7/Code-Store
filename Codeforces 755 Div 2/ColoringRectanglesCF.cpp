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
        ll n,m,ans;
        cin>>n>>m;

        if(n%3==0 || m%3==0)
        {
            ans=(m*n)/3;
        }
        else
        {
            ll maxi=max(m,n);
            if(maxi==n && n%3==1)
            {
                ans=((n-1)/3)*m;
                ans+=m/3+1;
            }
            else if(maxi==m && m%3==1)
            {
                ans=((m-1)/3)*n;
                ans+=n/3+1;
            }
            else if(maxi==n && n%3==2)
            {
                ans=((n-2)/3)*m;
                if(m==1)
                    ans+=1;
                else if(m==2)
                    ans+=2;
                else if(m%3==0)
                    ans+=2*m/3;
                else if(m%3==1)
                    ans+=2*(m-1)/3+1;
                else
                    ans+=2*(m-2)/3+2;
            }
            else
            {
                ans=((m-2)/3)*n;
                if(n==1)
                    ans+=1;
                else if(n==2)
                    ans+=2;
                else if(n%3==0)
                    ans+=2*n/3;
                else if(n%3==1)
                    ans+=2*(n-1)/3+1;
                else
                    ans+=2*(n-2)/3+2;
            }

            
            
        }
        cout<<ans<<endl;
    }
    return 0;
}