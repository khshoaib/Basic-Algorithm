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
const int M=1e9+7;

int binExp(int a, ll b, int m)
{
	int res=1;
	while(b>0)
	{
		if(b&1){
			res=(res * 1LL * a)%m;
		}
		a=(a * 1LL * a)%m;
		b>>=1;
	}return res;
}

int main()
{
	//50^64^32%mod
	//ll a,b; I a>>b;
	O binExp(50,binExp(64,32,M-1),M);
}