/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define kien main
using namespace std;
// const ll inf=LLONG_MAX;
// const ll mod=1e9+7;
int n, ans = 1;
pair<int, int> a[1005];
bool compare(pair<int, int> a, pair<int, int> b)    //sort để lấy thời gian kết thúc muộn nhất
{
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
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
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a, a + n, compare);
    int time = a[0].second;
    for (int i = 1; i < n; i++)
        if (a[i].first >= time)
        {
            ans++;
            time = a[i].second;
        }
    cout << ans;
}