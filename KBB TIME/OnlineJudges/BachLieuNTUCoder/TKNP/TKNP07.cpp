/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, k, a[100005], kq = 1000000;
int minn, maxx, n1;

int ktr(int l, int r)
{
    if (l > r)
    {
        return kq;
    }
    int mid = l + (r - l) / 2;
    int xxx = 1, jav = 0;
    for (int i = 0; i < n; i++)
    {
        if (jav + a[i] > mid)
        {
            jav = a[i];
            xxx++;
        }
        else
        {
            jav += a[i];
        }
        if (xxx > k)
        {
            return ktr(mid + 1, r);
        }
    }
    if (xxx <= k)
    {
        kq = min(kq, mid);
        return ktr(l, mid - 1);
    }
    return kq;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        minn += a[i];
        maxx = max(a[i], maxx);
    }
    ktr(maxx, minn);
    cout << kq;
}
