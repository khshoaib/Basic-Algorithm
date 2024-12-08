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
#define VV vector<pair<int, int> >
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
using namespace std;

double eps=1e-6;
double mul(double mid, double n)
{
    double m=1;
    rep(i,n)m*=mid;
    return m;
}
int main()
{
    double x,n; I x>>n;
    double lo=0, hi=x, mid;
    while(hi-lo>eps)
    {
        mid=(hi+lo)/2;
        if(mul(mid, n)>x)hi=mid;
        else lo=mid;
    }O setprecision(10)<<lo<<" "<<hi;
}
