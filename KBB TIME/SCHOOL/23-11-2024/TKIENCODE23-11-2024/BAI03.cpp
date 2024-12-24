/// Sức mạnh của lòng kiêu hãnh ---trungkien1252010@gmail.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int n, m, cnt[1000005], a[1000005];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    cnt[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] - m > 0 and cnt[a[i] - m] == 1)
        {
            int j = 0;
            while (a[j] + m != a[i])
            {
                j++;
            }
            cout << j << " " << i;
            exit(0);
        }
        cnt[a[i]]++;
    }
    cout << -1;
}