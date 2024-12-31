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
kien n,x,dem,sum,f[1000000],f1[1000000],a[1000000];
kien vtr,ans,k,b[1000000];

int main()
{
    cin >> n;
    for (int i = 1;i <= n; i++)
    {
        cin >> a[i];
    }
    f[1] = a[0];
    f[2] = abs(a[2] - a[1]);
    for (int i = 3; i <= n; i++)
    {
        f[i] = min(f[i-1] + abs(a[i] - a[i-1]), f[i-2] + abs(3*(a[i] - a[i-2])));
    }
    cout << f[n];
}
    