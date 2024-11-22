/// Suck Kiên's brain is very good to your brain
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a, b, c;
int check(int a, int b)
{
    if (b == 0)
        return 0;
    int t=check(a,b/2)%c;
    if(b%2==0)
        return (t+t)%c;
    else return ((t%c+t%c)%c+a%c)%c;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b >> c;
    int ans=check(a,b);
    cout<<ans;
}