/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
long n, a[100005], b[100005];
long long ans = 0;
int m, p, t, B;
void farthest_bus_stop(int i, int &u)
{
    // cout << b[u] << "\n";
    int l = u + 1, r = p + 1;
    int j = -1; // bến xe b[j] lớn nhất <=a[i+1]
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (b[mid] > a[i + 1])
            r = mid - 1;
        else
        {
            j = mid;
            l = mid + 1;
        }
    }
    if (j == -1)
    {
        ans += 1ll*t * (a[i + 1] - a[i]);
        // cout << "taxi\n";
    }
    else
    {
        int y = u + 1; // bến gần nhất bên phải, vì b[u] là số lớn nhất <=a[i] nên b[u+1]>a[i]
        if (y < j)
            ans += min(1ll * t * min(a[i] - b[u], b[y] - a[i]) + B + 1ll * t * (a[i + 1] - b[j]), 1ll*t * (a[i + 1] - a[i]));
        else // vì y trùng với j nên là chỉ còn cách chọn b[u]2
            ans += min(1ll*t * (a[i] - b[u]) + B + t * (a[i + 1] - b[j]), 1ll*t * (a[i + 1] - a[i]));
        u = j;
    }
    /*
        trong trường hợp y trùng j mà b[y]-a[i]<a[i]-b[u], giá sẽ tăng thêm B(thừa)
    */
}
void bai05()
{
    // long long ans1 = t * (n - 1);
    int u = 0; // bến xe gần nhất bên trái, có thể dùng đi taxi về
    for (int i = 0; i <= m; i++)
    {
        farthest_bus_stop(i, u);
    }
    cout << ans;
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
    cin >> n >> m >> p >> t >> B;
    a[0] = 1; // nhà của Tít
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    a[m + 1] = n; // khu giải trí
    sort(a,a+m+2);
    b[0] = 1;     // bến ở nhà Tít
    for (int i = 1; i <= p; i++)
        cin >> b[i];
    b[p + 1] = n; // bến ở Khu giải trí
    sort(b,b+p+2);
    bai05();
}