/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien dem, N, K, vtr;
kien l, r, ans;

kien lcm(kien a, kien b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    cin >> N >> K;
    vector<kien> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            vtr = lcm(a[i], a[j]);
            if (vtr <= K)
            {
                dem++;
            }
        }
    }
    cout << dem << endl;
    return 0;
}
