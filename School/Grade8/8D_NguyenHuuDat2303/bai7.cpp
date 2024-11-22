#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,ans;
char k;
string s;
main()
{
    if(fopen("bai7.inp","r"))
    {
        freopen("bai7.inp","r",stdin);
        freopen("bai7.out","w",stdout);
    }
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int i=0;i<s.size();i++)
            if(s[i]==k) ans++;
    }
    cout<<ans;
}
