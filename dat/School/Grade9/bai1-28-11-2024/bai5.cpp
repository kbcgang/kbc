#include <bits/stdc++.h>
using namespace std;
int n, k;
long long m, ans;
string a[100005];
int b[100005];
map<int, int> dem;
int modul(long long a)
{
    long long b = m;
    long long t = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            t = t * a% k;
        a = a * a % k;
        b /= 2;
    }
    return t;
}
int get_number(string s)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
        ans=(ans*10+s[i]-48)%k;
    return ans;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // for (int i = 0; i < n; i++)
    //     cout<< a[i]<<" ";
    for (int i = 0; i < n; i++)
    {
        b[i] = get_number(a[i]);
        // cout<<b[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = modul(b[i]);
    }
    // for (int i = 0; i < n; i++)
    //     cout << a[i] << " ";
    dem[0]++;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += b[i];
        s %= k;
        ans += dem[s];
        dem[s]++;
    }
    cout << ans;
}