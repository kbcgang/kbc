/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll ans;
int x[100005];
vector<int> a; // danh sách nợ
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
        cin >> x[i];
    int s = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] > 0)
        {
            s += x[i];
            if (j < a.size())
                if (s >= -x[a[j]]) // số tiền đủ để trả nợ cho đứa đầu tiên đang nợ
                {
                    ans += 1ll * (i - a[j]) * 2; // di chuyển về vị trí nợ và sau đó di chuyển về vị trí i
                    while (j < a.size())         // vị trí tăng dần và cuối cùng vẫn về vị trí i
                    {
                        if (s + x[a[j]] >= 0)
                            s += x[a[j]]; // trả nợ
                        else
                            break;
                        // cout << x[a[j]] << "\n";
                        j++;
                    }
                }
        }
        else
        {
            a.push_back(i); // vị trí đứa cần phải nợ
            if (s >= -x[a[j]])
            {
                s += x[i]; // đủ tiền -> trả luôn nợ
                j++;
            }
        }
        ans++; // mỗi bước khi di chuyển
               //  cout<<s<<" "<<"\n";
    }
    cout << ans;
}