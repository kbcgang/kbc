#include<bits/stdc++.h>
#define int long long
#define mod 2000019
#define mod2 50000003
using namespace std;
int ans, n, y,dem[100];
string s;
int check(int y, int x)
{
    int ans=1;
    while(x>0){
    if(x%2==1)
    {
        ans=(ans%mod*y%mod)%mod;
    }
    x/=2;
    y=(y*y)%mod;}
    return ans;
}
int gt[16];
void check1()
{
    gt[1] = 1;
    for(int i = 2; i <= 15; i++)
    {
        gt[i] = (gt[i - 1] * i);
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    check1();
    cin >> n;
    while(n--)
    {
        int t = 1;
        cin >> s >> y;
        for(int i=0;i<s.size();i++){
            dem[s[i]]++;
            t*=dem[s[i]];
        }
        int x=gt[s.size()]/t;
        int m=check(y,x);
        ans=(ans%mod2+m%mod2)%mod2;
        for(int i=65;i<=90;i++)
            dem[i]=0;
    }
    cout<<ans%mod2;
}
