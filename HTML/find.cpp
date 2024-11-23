///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
#define maxn 100010
int n, m, p, t, b, home[maxn], bus[maxn];
int near[maxn], l, r, mid, id, i;

int main()
{
    kien res = 0;
    cin >> n >> m >> p >> t >> b;
    for(i = 1; i <= m; i++)
    {
        cin >> home[i];
    }
    for(i = 1; i <= p; i++)
    {
        cin >> bus[i];
    }
    home[0] = 1;
    home[m + 1] = n;
    bus[0] = 1;
    bus[p + 1] = n;
    for(i = 1; i <= m; i++)
    {
        l = 0;
        r = p + 1;
        id = 0;
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(abs(home[i] - bus[mid]) < abs(home[i] - bus[id]))
            {
                id = mid;
            }
            if(bus[mid] > home[i])
            {
                r = mid - 1;
            }
            else if(bus[mid] < home[i])
            {
                l = mid + 1;
            }
            else
            {
                break;
            }
        }
        near[i] = bus[id];
    }
    near[0] = 1;
    near[m + 1] = n;
    for(i = 0; i <= m; i++)
    {
        kien f1, f2, f3;
        f1 = (kien)abs(near[i] - home[i]) * t + b;
        f2 = (kien)abs(near[i + 1] - home[i + 1]) * t;
        f3 = (kien)abs(home[i + 1] - home[i]) * t;
        res += + min(f1 + f2, f3);
    }
    cout << res;
}
