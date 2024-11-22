#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[21],ans;
bool checknt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
void check(int t1,int t2,int i)
{
    if(i==n-1){
        ans+=checknt(abs(t1-t2));
        return;
    }
    check(t1+a[i],t2-a[i],i+1);
    check(t1,t2,i+1);
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
    cin>>n;
    int s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    check(0,s,0);
    cout<<ans;
}
