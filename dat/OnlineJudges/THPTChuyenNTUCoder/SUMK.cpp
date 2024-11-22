#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans,a[100],k;
void check(int i,int s)
{
    if(i==n){
        if(s==k)
            ans++;
        return;
    }
    check(i+1,s);
    check(i+1,s+a[i]);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    check(0,0);
    cout<<ans;
}
