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

int upper(V &v, int element)
{
    int l=0,r=v.size()-1,mid;
    while(r-l>1)
    {
        mid=(l+r)/2;
        if(v[mid]<=element)l=mid+1;
        else r=mid;
    }
    if(v[l]>element)return l;
    if(v[r]>element)return r;
    return -1;
}

int main()
{
    int n; I n;
    V v(n);
    rep(i,n)I v[i];
    int element; I element;
    int x=upper(v,element);
    O x<<" "<<v[x]<<endl;
}
