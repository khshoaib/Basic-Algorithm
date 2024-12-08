#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define repp(i,n) for(ll i=1;i<=n;i++)
#define Repp(n,i) for(int i=n;i>0;i--)
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
const int N = 1e5+10;
V g[N];
int vis[N];
int level[N];
void bfs(int source){
    queue<int>q;
    q.push(source);
    vis[source]=1;

    while(!q.empty()){
        int cur_v=q.front();
        q.pop();
        O cur_v<<" ";
        for(auto child:g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_v]+1;
            }
        }
    }O endl;
}

int main()
{
    int n; I n;
    rep(i,n-1)
    {
        int x,y; I x>>y;
        g[x].pb(y);
        g[y].pb(x);
    }
    bfs(1);
    repp(i,n){
        O i<<": "<<level[i] en;
    }
}

