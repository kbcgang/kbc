///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

kien f(kien n)
{
    return n * n * n - 2 * n + 5;
}

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        kien K;
        cin >> K;

        kien l = 1, r = 1000000;
        bool dem = false;

        while (l <= r)
        {
            kien mid = l + (r - l) / 2;
            kien vtr = f(mid);

            if (vtr == K)
            {
                cout << mid << endl;
                dem = true;
                break;
            }
            else if (vtr < K)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (!dem)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
