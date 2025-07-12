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
int snt[10000005];
void make_sieve()
{
    for (int i = 2; i <= sqrt(1e7); i++)
        if (snt[i] ^ 1)
            for (int j = i * i; j <= 1e7; j += i)
                snt[j] = 1;
    for (int i = 2; i <= 1e7; i++)
    {
        if (snt[i] | 0)
            snt[i] = snt[i - 1] + 1;
        else
            snt[i] = snt[i - 1];
    }
}
int q, l, r;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> q;
    make_sieve();
    while (q--)
    {
        cin >> l >> r;
        cout << snt[r] - snt[l - 1] << "\n";
    }
}