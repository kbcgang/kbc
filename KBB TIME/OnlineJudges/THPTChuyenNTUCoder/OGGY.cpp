/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

kien lcm(kien a, kien b)
{
    return a / __gcd(a, b) * b;
}

kien QL(const vector<int> &a, kien M)
{
    int N = a.size();
    kien kq = 0;

    for (int i = 1; i < (1 << N); ++i)
    {
        kien bcnn = 1;
        int bits = 0;

        for (int j = 0; j < N; ++j)
        {
            if (i & (1 << j))
            {
                bcnn = lcm(bcnn, a[j]);
                bits++;
                if (bcnn > M)
                    break;
            }
        }
        if (bcnn <= M)
        {
            if (bits % 2 == 1)
            {
                kq += M / bcnn;
            }
            else
            {
                kq -= M / bcnn;
            }
        }
    }

    return kq;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    kien M;
    cin >> N >> M;
    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }
    kien ans = QL(a, M);
    cout << ans << endl;
    return 0;
}
