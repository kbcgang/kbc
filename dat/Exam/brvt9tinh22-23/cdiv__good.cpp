///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<climits>
#include<array>
#include<cmath>
#include<algorithm>
#include<map>
#include<unordered_map>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int a[200005];
void good()
{
    cin>>n;
    int ans=1;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            ans=max(ans,__gcd(a[i],a[j]));
    cout<<ans;
}
int d[1000005];
void bad()
{
    int ans=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        d[a[i]]++;
    }
    for(int i=2;i<=1e6;i++){
        int dem=0;
        for(int j=i;j<=1e6;j+=i){
            dem+=d[j];
            if(dem>1)
                ans=i;
        }
    }
    cout<<ans;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    // cin.tie(0)->sync_with_stdio(0);
    good();
}