///Made by Nguyễn Hữu Đạt
//s=1+2+3+4+...+n
//tìm s/n;
//Input: 5
//Ouput: 3
//n<=1e18+1 n&1
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
    cout<<(n+1)/2;
}