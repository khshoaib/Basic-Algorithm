#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define repp(i,n) for(ll i=1;i<=n;i++)
#define Repp(n,i) for(ll i=n;i>0;i--)
#define Rep(n,i) for(int i=n-1;i>=0;i--)
#define mx INT_MAX
#define mn INT_MIN
#define V vector<bool>
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
const int N = 1e7+10;
V isprime(N,1);
int main()
{
    isprime[0]=0;
    isprime[1]=0;
    for(int i=2; i<N; i++)
    {
        if(isprime[i]==1)
            for(int j=2*i; j<N; j+=i)
        {
            isprime[j]=0;
        }
    }
//    int c=0;
//    repp(i,12)
//    {
//        if(isprime[i]==1)c++;
//    }O c en;
    int q; I q;
    while(q--)
    {
        int n; I n;
        if(isprime[n]==1){O "prime" en;}
        else O "not prime" en;
    }
}
//q*O(1)
