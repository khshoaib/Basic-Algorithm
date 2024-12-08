#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,n) for(int i=1;i<=n;i++)
#define Rep(n,i) for(int i=n;i>0;i--)
#define Repp(n,i) for(int i=n-1;i>=0;i--)
#define mx INT_MAX
#define mn INT_MIN
#define V vector<ll>
#define sv(vi) sort(vi.begin(),vi.end())
#define VV vector<pair<int, int> >
#define S set<int>
#define M map<char,int>
#define SV(a) sort(a.begin(), a.end())
#define RSV(a) reverse(a.begin(), a.end())
#define en <<endl;
#define I cin>>
#define O cout<<
#define pb push_back
#define ld long double
#define val 1000000007
#define W(t) int t;I t;up: while(t--)
#define minn(a,b,c) min(a,min(b,c))
#define maxx(a,b,c) max(a,max(b,c))
using namespace std;
//set<int>s;
int main()
{
    int n;
    I n;
    V v(n);
    rep(i,n)I v[i];
    int x;
    I x;
    int lo=0,hi=n-1;
    int mid;
    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(v[mid]<x) lo=mid+1;
        else hi=mid;
    }
    if(v[lo]==x){O lo en;}
    else if(v[hi]==x){O hi en;}
    else O "Not Found" en;
}
