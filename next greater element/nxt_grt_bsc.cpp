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
#define S set<ll>
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

V NGE(V v)
{
    V nge(v.size());
    stack<int> st;
    rep(i,v.size())
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            nge[st.top()]=i; st.pop();
        }st.push(i);
    }
    while(!st.empty())
    {
        nge[st.top()]=-1;
        st.pop();
    }return nge;
}

int main()
{
    int n; I n;
    V v(n);
    rep(i,n)I v[i];
    V nge=NGE(v);
    rep(i,n)
    O v[i]<<" "<<(nge[i]==-1 ? -1 : v[nge[i]]) en;
}
/*
6
4 5 2 25 7 8
*/
