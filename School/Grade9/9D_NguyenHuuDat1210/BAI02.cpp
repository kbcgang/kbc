/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
map<long long, bool> a;
bool check(long long n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int b[5] = {1, 2, 3, 5, 7};

void make_super(long long m)
{
    if (m <= 1e9)
        for (int i = 0; i < 5; i++)
        {
            if (check(m * 10 + b[i]))
            {
                a[m * 10 + b[i]] = 1;
                make_super(m * 10 + b[i]);
            }
        }
}
int n;
long long c,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("BAI02.inp","r"))
    {
        freopen("BAI02.inp","r",stdin);
        freopen("BAI02.out","w",stdout);
    }
    cin >> n;
    a[2]=a[3]=a[5]=a[7]=1;
    // make_super(1);
    make_super(2);
    make_super(3);
    make_super(5);
    make_super(7);
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(a[c])
            ans=max(ans,c);
    }
    cout<<ans;
}