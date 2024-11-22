/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
int n, k;
vector<pair<int, int>> a;
int c[100005];
bool compare(pair<int, int> a, pair<int, int> b)
{
    return 1ll * (a.first * b.second) < 1ll * b.first * a.second;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i=0;i<n;i++)
        cin>>c[i];
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        a.push_back(make_pair(c[i], y));
    }
    sort(a.begin(), a.end(), compare);
    int x=a[k-1].first,y=a[k-1].second;
    int m=__gcd(x,y);
    cout<<x/m<<" "<<y/m;
    // for (int i = 0; i < n; i++)
    //     cout << a[i].first<<" "<<a[i].second<< "\n";
}