///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, a[1000000],s;
kien maxx = INT_MAX,minn, vtr,ans;

bool ktr(kien mid)
{
    kien cake = 0;
    for (int i = 1; i <= n; i++)
    {
        cake += mid / a[i];
        if (cake >= s)
        {
            return true;
        }
    }
    if (cake < s)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void tknp()
{
    kien l = 1, r = maxx;
    kien mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid) == true)
        {
            kq = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = min(maxx, a[i]);
    }
    maxx = maxx*s;
    tknp();
}
    