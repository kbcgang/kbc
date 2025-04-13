///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    ll ans=n/5;
    int du=n%5;
    if(du%3==0){cout<<ans+du/3;}
    else{
        for(int i=1;i<=6;i++)
        {
            ans--;
            du+=5;
            if(du%3==0){cout<<ans+du/3;}
        }
        cout<<-1;
    }
}