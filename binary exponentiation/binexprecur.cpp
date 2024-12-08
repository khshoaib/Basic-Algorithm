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
#define mod 1e9+7
using namespace std;

int binExpRecur(int a, int b)
{
	if(b==0) return 1;
	int res=binExpRecur(a,b/2);
	if(b&1){
		return a*res*res;
	}else{
		return res*res;
	}
}

int main()
{
	int a,b; I a>>b;
	// int ans=1;
	// rep(i,b)
	// {
	// 	ans*=a;
	// }O ans en;
	O binExpRecur(a,b);
}