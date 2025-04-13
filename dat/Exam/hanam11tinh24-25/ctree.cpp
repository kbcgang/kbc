///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<array>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
int n;
int d[105],x;
int a[1000005];
const ll mod=1e9+7;
void sub1()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int mi=a[1];
    for(int i=1;i<=n;i++)
        mi=min(mi,a[i]);
    int d=0;
    for(int i=1;i<=n;i++)
        if(mi==a[i])d++;
    if(d==n)cout<<mi<<' '<<n;
    else cout<<mi<<' '<<n-d;
}
void sub2()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        d[x]++;
    }
    for(int i=1;i<=1e2;i++)
        if(d[i]==n){
            cout<<i<<' '<<n;
            exit(0);
        }
        else if(d[i]>0){
            cout<<i<<' '<<n-d[i];
            exit(0);
        }
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    sub2();
}