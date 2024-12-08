#include <bits/stdc++.h>
#define int long long 
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,n) for(int i=1;i<=n;i++)
#define Repp(n,i) for(int i=n;i>0;i--)
#define Rep(n,i) for(int i=n-1;i>=0;i--)
#define mx INT_MAX
#define mn INT_MIN
#define V vector<int>
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
#define mod 998244353 
using namespace std;
const int N = 100;
V g[N], vis(N), dist(N), mark(N);

void bfs(V sources){
    queue<int> q;
    rep(i,sources.size()){
        int source=sources[i];
        q.push(source);
        vis[source]=1;
        dist[source]=0;
        // mark[source]=1;
    }

    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int i=0; i<g[node].size(); i++){
            int child=g[node][i];
            if(vis[child]==0){
                vis[child]=1;
                dist[child]=dist[node]+1;
                q.push(child);
            }
        }
    }   
}

signed main()
{
    int nodes, edges;
    I nodes>>edges;
    while(edges--){
        int u,v; I u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    
    int num_of_sources; I num_of_sources;
    V sources;
    while(num_of_sources--){
        int source; I source;
        sources.pb(source);
    }
    bfs(sources);
    
    for(int i=1; i<=nodes; i++){
        // if(mark[i])continue;
        if(dist[i]==0)continue;
        O "distance of "<<i<<" is: "<<dist[i] en;
    }
}
/*
10 13
1 2
1 3
2 4
3 4
1 5
3 6
5 6
6 7
5 10
6 10
9 1
7 9
8 9
3
1 7 10
*/
