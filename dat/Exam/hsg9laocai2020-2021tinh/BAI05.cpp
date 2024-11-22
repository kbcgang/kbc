/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int k;
int rev(int n)
{
    int s=0;
    while(n>0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
void check(int k)
{
    int ans1=1,ans2=1;
    for(int i=0;i<k-1;i++)
    {
        ans1+=2;
        if(ans1%5==0)
            ans1+=2;
    }
    k--;
    int tam=1;
    while(k--)
    {
        ans2=rev(tam)+2;
        tam=ans2;
    }
    cout<<ans2<<" "<<ans1;
}
kien()
{
    if (fopen("BAI05.inp", "r"))
    {
        freopen("BAI05.inp", "r", stdin);
        freopen("BAI05.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> k;
    // check(k);
    long long ans2 = (k / 4 + k) * 2 - 1;
    if (ans2 % 5 == 0)
        ans2 += 2;
    if(k==1)
    {
        cout<<1<<"\n"<<ans2;
        exit(0);
    }
    long ans1=10;
    k--;
    k = k % 81;
    int save=10;
    while(k--)
    {
        ans1=rev(save)+2;
        save=ans1;
    }
    cout<<ans1<<"\n"<<ans2;
}