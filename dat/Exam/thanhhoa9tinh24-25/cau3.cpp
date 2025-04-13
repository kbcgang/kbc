/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
bool a[1000005];
int Min[1000005], ans = -1e6;
int b[10000005];
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
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int d = 1, m = 1, dem1 = 0;
    dem1 += a[1];   //đếm số số 1 xuất hiện
    for (int i = 2; i <= n; i++)
    {
        // lấy các đoạn 0,1, lưu vào mảng
        //với số 1 thì sau khi lật sẽ là 0 -> tổng mảng n sẽ -1 mỗi số 1 và ngược lại
        if (a[i] != a[i - 1])
        {
            if (a[i] == 0)
                b[m++] = -d;
            else
                b[m++] = d;
            d = 0;
        }
        dem1 += a[i];
        d++;
    }
    // xử lí đoạn cuối
    if (a[n] == 1)
        b[m] = -d;
    else
        b[m] = d;
    for (int i = 1; i <= m; i++)
        b[i] = b[i - 1] + b[i]; // tổng các đoạn 1->m có độ chênh lệch 0,1 từ 1->n
    // for(int i=1;i<=m;i++)
    //     cout<<b[i]<<" ";
    for (int i = 1; i <= m; i++)
        Min[i] = min(Min[i - 1], b[i]); //tìm tổng đoạn có độ chênh lệch số 0,1 là ít nhất xuất hiện ít nhất
    for (int i = 1; i <= m; i++)
        ans = max(ans, b[i] - Min[i - 1]);
    cout << ans + dem1; //+dem1, khi cộng dồn thì ta đã trừ số số 1
}