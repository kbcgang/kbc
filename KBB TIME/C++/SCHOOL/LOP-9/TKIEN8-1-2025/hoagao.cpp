///Made by Nguyễn Hữu Đạt
//đưa ra "YES" nếu x chẵn và chia hết cho 5, ngược lại in ra "NO"
// Input: 20
// Output: YES
// Input: 125
// Output: NO
// x<=1e12
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll x;
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
    cin>>x;
    if(x%10==0)cout<<"YES";
    else cout<<"NO";
}