///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <iostream>
#include <algorithm>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, f[Million], f1[Million];
kien maxx,minn, vtr,ans,l,r;

struct data
{
    kien di, ve, food;
};
data a[Million];

bool cmp(data x, data y)
{
    if (x.di < y.di)
        return true;
    else if (x.di == y.di)
        return x.ve < y.ve;
    if (x.di == y.di and x.ve == y.ve)
        return x.food < y.food;
}

int tknp(int x)
{
    l = 1;
    r = k;
    while (l <= r)
    {
        kien mid = (l + r) / 2;
        if (a[mid].di >= x)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return r + 1;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i].di >> a[i].ve >> a[i].food;
    }
    sort(a + 1, a + k + 1, cmp);
    for (int i = 1; i <= k; i++)
    {
        if (f[i] >= 1)
        {
            n += f[i];
        }
        if (f1[i] >= 1)
        {
            n += f1[i];
            m += f1[i];
        }
        if (n > 0 and a[i].food == 0)
        {
            n--;
            cout << "Yes\n";
            vtr = tknp(a[i].ve);
            f[vtr]++;
        }
        else if (m > 0 and n > 0 and a[i].food == 1)
        {
            m--;
            n--;
            cout << "Yes\n";
            vtr = tknp(a[i].ve);
            f1[vtr]++;
        }
        else
            cout << "No\n";
    }
}

/// một số nhà chuyên gia đã cho rằng việc này có thể ảnh hưởng trực tiếp đến sức khỏe của bạn
/// gây hại về tih thần và sức khỏe