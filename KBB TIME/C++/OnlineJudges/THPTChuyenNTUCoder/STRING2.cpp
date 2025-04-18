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

const int P = 31;         // Hệ số băm
const int MOD1 = 1e9 + 7; // Mô-đun cho băm từ trái qua phải
const int MOD2 = 1e9 + 9; // Mô-đun cho băm từ phải qua trái
int n;
string S;
vector<kien> hashLeft1, hashLeft2, pwr1, pwr2;

void precompute()
{
    pwr1.resize(n + 1);
    pwr2.resize(n + 1);
    hashLeft1.resize(n + 1);
    hashLeft2.resize(n + 1);

    pwr1[0] = pwr2[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        pwr1[i] = (pwr1[i - 1] * P) % MOD1;
        pwr2[i] = (pwr2[i - 1] * P) % MOD2;
    }
    for (int i = 1; i <= n; i++)
    {
        hashLeft1[i] = (hashLeft1[i - 1] * P + S[i - 1] - 'a' + 1) % MOD1;
        hashLeft2[i] = (hashLeft2[i - 1] * P + S[i - 1] - 'a' + 1) % MOD2;
    }
}

pair<kien, kien> getHashLeft(int l, int r)
{
    kien h1 = (hashLeft1[r] - hashLeft1[l - 1] + MOD1) * pwr1[n - r] % MOD1;
    kien h2 = (hashLeft2[r] - hashLeft2[l - 1] + MOD2) * pwr2[n - r] % MOD2;
    return {h1, h2};
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> S;
    n = S.length();
    precompute();

    int Q;
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        bool ktr = true;
        for (int i = 0; i < (R - L + 1) / 2; i++)
        {
            if (S[L - 1 + i] != S[R - 1 - i])
            {
                ktr = false;
                break;
            }
        }
        if (ktr)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
