#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define repp(i,n) for(ll i=1;i<=n;i++)
#define Repp(n,i) for(ll i=n;i>0;i--)
#define Rep(n,i) for(int i=n-1;i>=0;i--)
#define mx INT_MAX
#define mn INT_MIN
#define V vector<ll>
#define sv(vi) sort(vi.begin(),vi.end())
#define VV vector<pair<ll, ll> >
#define S set<int>
#define M map<int,int>
#define SV(a) sort(a.begin(), a.end())
#define RV(a) reverse(a.begin(), a.end())
#define en <<endl;
#define I cin>>
#define O cout<<
#define pb push_back
#define ld long double
#define W(t) int t;I t;up: while(t--)
#define minn(a,b,c) min(a,min(b,c))
#define maxx(a,b,c) max(a,max(b,c))
#define mod 998244353
using namespace std;
int main()
{
    int n; I n;
    int f=1;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)f=0;
    }if(f){O "prime";}
    else O "not prime";
}
//O(logn)
