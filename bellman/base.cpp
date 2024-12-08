#include <bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
#define repp(i,n) for(ll i=1;i<=n;i++)
#define Rep(n,i) for(ll i=n;i>0;i--)
#define Repp(n,i) for(int i=n-1;i>=0;i--)
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
#define val 1000000007
#define W(t) int t;I t;up: while(t--)
#define minn(a,b,c) min(a,min(b,c))
#define maxx(a,b,c) max(a,max(b,c))
using namespace std;
const int N = 510;
const int INF = 1e9+10;
int d[N][N];
int main()
{
    rep(i,N)rep(j,N)
    {
        if(i==j)d[i][j]=0;
        else d[i][j]=INF;
    }
    int n,m; I n>>m;
    rep(i,m)
    {
        int x,y,w; I x>>y>>w;
        d[x][y]=w;
    }
    repp(k,n)
    {
        repp(i,n)
        {
            repp(j,n)
            {
                if(d[i][k]!=INF && d[k][j]!=INF)
                    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    repp(i,n)
    {
        repp(j,n)
        {
            if(d[i][j]==INF){O "I ";}
            else O d[i][j]<<" ";
        }O endl;
    }
}
/*
6 9
1 2 1
1 3 5
2 3 2
3 5 2
2 5 1
2 4 2
4 5 3
4 6 1
5 6 2
*/
