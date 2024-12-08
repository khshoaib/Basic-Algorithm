#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,n) for(int i=1;i<=n;i++)
#define Rep(n,i) for(int i=n;i>0;i--)
#define Repp(n,i) for(int i=n-1;i>=0;i--)
#define mx INT_MAX
#define mn INT_MIN
#define V vector<int>
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

const int N=1e5+10;
V g[N];
int vis[N];

void dfs(int vertex)
{
//action on vertex after entring vrtx
    //if(vis[vertex])return;
    O vertex en;
    vis[vertex]=1;
    for(int child : g[vertex]){
        O "par"<<vertex<<", child"<<child en;
        if(vis[child])continue;
//action on child before entering chlid
        dfs(child);
//action on child before exiting chld
    }
//action on vertex before exiting vertx
}

int main()
{
    int n,m;  I n>>m;
    rep(i,m)
    {
        int v1,v2; I v1>>v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
        dfs(v1);
    }
}
/*
6 9
1 3
1 5
3 5
3 4
3 6
3 2
2 6
4 6
5 6
*/
