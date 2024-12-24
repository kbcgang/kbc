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

kien A[100005], L[100005];
int N, P, kq = 0;

kien min(kien a, kien b)
{
    return (a < b) ? a : b;
}

int tknp(int i, int j)
{
    int d = i, c = j - 1, x = j;
    while (d <= c)
    {
        int m = (d + c) / 2;
        if (L[m] > A[j] - P)
        {
            d = m + 1;
        }
        else
        {
            x = m;
            c = m - 1;
        }
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> P;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    L[1] = A[1];
    for (int i = 2; i <= N; i++)
    {
        L[i] = min(L[i - 1], A[i]);
    }

    for (int j = 2; j <= N; j++)
    {
        int i = tknp(1, j);
        if (j - i > kq)
        {
            kq = j - i;
        }
    }
    cout << kq;
    return 0;
}
    