#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }cin>>x;
    int lo=0,hi=n-1,mid,res;
    while(hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(v[mid]>=x)
        {
            res=mid;
            hi=mid-1;
        }else lo=mid+1;
    }cout<<v[res];
}
