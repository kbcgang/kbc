/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
long long a, b;
vector<long long> n;
// int use[10];
void make_lucky(long long m)
{
    if (m <= b)
    {
        // m/=10;
        m = m * 10 + 6;
        n.push_back(m);
        make_lucky(m);
        m /= 10;
        m = m * 10 + 8;
        n.push_back(m);
        make_lucky(m);
    }
    // m/=10;
}
int l,r;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Lucky.inp", "r"))
    {
        freopen("Lucky.inp", "r", stdin);
        freopen("Lucky.out", "w", stdout);
    }
    cin >> a >> b;
    make_lucky(0);
    sort(n.begin(),n.end());
    for(int i=0;i<n.size();i++)
        if(n[i]>=a)
        {
            l=i;
            break;
        }
    for(int i=n.size()-1;i>=0;i--)
        if(n[i]<=b)
        {
            r=i;
            break;
        }
    cout<<r-l+1;
}
