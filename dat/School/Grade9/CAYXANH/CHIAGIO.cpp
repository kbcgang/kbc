/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, k;
long a[105], s;
long pre[105];
int groups(long hour)
{
    int group = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && pre[j] - pre[i - 1] < hour)
        {
            j++;
        }
        if (pre[j] - pre[i - 1] == hour)
        {
            i = j;
            group++;
        }
        else
            return 0;
    }
    return group;
}
void chiagio()
{
    long m = pre[n - 1];
    for (long i = 1; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            int group = groups(i);
            if (group != 0)
            {
                if (group > k)
                {
                    k = group;
                    s = i;
                }
            }
            group = groups(m / i);
            if (group != 0)
            {
                if (group > k)
                {
                    k = group;
                    s = m / i;
                }
            }
        }
    }
    cout << k << " " << s << "\n";
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j < n && pre[j] - pre[i - 1] <= s)
        {
            cout << a[j] << " ";
            j++;
        }
        cout << "\n";
        i = j-1;
    }
}
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
        cin >> a[i];
    for (int i = 0; i < n; i++)
        pre[i] = pre[i - 1] + a[i];
    chiagio();
}