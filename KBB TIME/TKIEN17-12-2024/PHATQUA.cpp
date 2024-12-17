///HÃ£y lÃ m SÆ° tá»­, Ä‘á»«ng lÃ m Nai.
///HÃ£y lÃ m thá»£ sÄƒn, Ä‘á»«ng lÃ m con má»“i.
/// --- trungkien1252010@gmai.com ---
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll a,b;
int ans;
kien()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    for(ll i=1;i<=sqrt(a);i++)
        if(a%i==0)
        {
            if(b%i==0) ans++;
            if(i*i!=a)
                if(b%(a/i)==0)
                    ans++;
        }
    cout<<ans;
}