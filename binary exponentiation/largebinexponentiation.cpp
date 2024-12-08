#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,n) for(int i=1;i<=n;i++)
#define Repp(n,i) for(int i=n;i>0;i--)
#define Rep(n,i) for(int i=n-1;i>=0;i--)
#define V vector<int>
#define VV vector<pair<ll, ll> >
#define S set<int>
#define M map<int,int>
#define SV(a) sort(a.begin(), a.end())
#define RV(a) reverse(a.begin(), a.end())
#define en <<endl;
#define I cin>>
#define O cout<<
#define pb push_back
#define W(t) int t;I t;up: while(t--)
#define minn(a,b,c) min(a,min(b,c))
#define maxx(a,b,c) max(a,max(b,c))
using namespace std;
const ll mod=1e18+7;

int binExpIter(ll a, ll b)
{
	int res=1;
	while(b!=0){
		if(b&1){
			res=binMultiply(res, a);
		}a=binMultiply(a, a);
		b>>=1;
	}return res;
}
//log^2(N)
int binMultiply(ll a, ll b)
{
	int res=0;
	while(b!=0){
		if(b&1){
			res=(res+a)%mod;
		}a=(a+a)%mod;
		b>>=1;
	}return res;
}

int main()
{
	ll a,b; I a>>b;
	O binExpIter(a,b);
}