#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
map<int, bool> superprime;
bool test(int a, int m, int k, int n)
{
    int ans = 1;
    while (m > 0)
    {
        if (m & 1)
            ans = 1ll * ans * a % n;
        a = 1ll * a * a % n;
        m /= 2;
    }
    if (ans == 1 || ans == n - 1)
        return 1;
    for (int i = 1; i < k; i++)
    {
        ans = 1ll * ans * ans % n;
        if (ans == n - 1)
            return 1;
        if (ans == 1)
            return 0;
    }
    return 0;
}
vector<int> prime = {2, 3, 5, 7};
bool RabinMiller(int n)
{
    for (auto a : prime)
        if (n == a)
            return 1;
    if (n < 11)
        return 0;
    int m = n - 1, k = 0;
    while (m % 2 == 0)
    {
        k++;
        m /= 2;
    }
    for (auto a : prime)
        if (test(a, m, k, n) == 0)
            return 0;
    return 1;
}
vector<int> prime1 = {1, 3, 7, 9};
void get_megaPrime(ll s)
{
    for (int i = 0; i < prime1.size(); i++)
    {
        s = s * 10 + prime1[i];
        if (s >= 1e8)
            return;
        bool check = RabinMiller(s);
        if (check)
        {
            superprime[(int)s] = 1;
            get_megaPrime(s);
        }
        s /= 10;
    }
}
bool checkMegaPrime(int n)
{
    if (superprime[n])
        for (auto i : prime1)
            if (RabinMiller(n * 10 + i))
                return 1;
    return 0;
}
int n, m, a[100005], dem[100005];
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(auto &i:prime)
    {
        superprime[i]=1;
        get_megaPrime(i);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        dem[i] = dem[i - 1] + checkMegaPrime(a[i]);
    }
    int l, r;
    cin >> m;
    while (m--)
    {
        cin >> l >> r;
        cout << dem[r-1] - dem[l - 2] << "\n";
    }
}