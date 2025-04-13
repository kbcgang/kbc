/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n,ans;
long long a[100005], p;
map<long long, int> pos;
vector<pair<long long, int>> b;
int ma[100005];
bool compare(pair<long long, int> a, pair<long long, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int find(int x, int j)
{
    int ans = -1;
    int l = 0, r = b.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x >= b[m].first)    //a[j]>=a[i]+p
        {
            if (ma[m] < j)  //thỏa mãn j>i
                ans = ma[m];
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ans;
}
void pre_max()
{
    /*
    sau khi sắp xếp vector theo compare thì ta được first tăng dần
    nếu thỏa mãn (1) thì các i-1.first sẽ luôn thỏa mãn
    -> sẽ tìm vị trí bé nhất
    */
    ma[0] = b[0].second;
    for (int i = 1; i < b.size(); i++)
        ma[i] = min(ma[i - 1], b[i].second);
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
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        if (pos[a[i] + p] == 0)
            pos[a[i] + p] = i;
            /*
                a[j]-a[i]>=p <=> a[j]>=a[i]+p   (1)
                ở đây sẽ lưu vị trí a[i]
                nếu gặp a[j]>=(1) thì sử dụng
            */
    for (auto i : pos)
    {
        b.push_back(make_pair(i.first, i.second));
    }
    sort(b.begin(), b.end(), compare);  //sử dụng vector để sắp xếp map theo a[i]+p
    // for(auto i:b)
    //     cout<<i.first<<" "<<i.second<<"\n";
    pre_max();  //lấy vị trí bé nhất theo vector
    for (int i = 1; i <= n; i++)
    {
        int k = find(a[i], i);  //tìm (1)
        if (k != -1)
            ans = max(ans, abs(i - k)); //tìm khoảng cách từ i->j
    }
    cout << ans;
    // cout<<n;
}