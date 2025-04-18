#include <bits/stdc++.h>
#define siu                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define MOD 100000007
#define MAXX 1000005
#define int long long
using namespace std;

const int N = 1e6 + 3;

pair<string, int> a[N];

bool cmp(pair<string, int> a, pair<string, int> b)
{
    while (a.first.size() < b.first.size())
        a.first = '0' + a.first;
    while (a.first.size() > b.first.size())
        b.first = '0' + b.first;
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int32_t main()
{
    siu
        string s,
        res = "";
    cin >> s;
    int l = 0;
    /// vì sao em phải khóc, Can you give me a change ? --- I want to help you ---
    for (int i = 0; i <= (int)s.size(); i++)
    {
        if (i < (int)s.size() and isdigit(s[i]))
        {
            res += s[i];
        }
        else
        {
            if (!res.empty())
            {
                l++;
                a[l].first = res;
                a[l].second = l;
                res = "";
            }
        }
    }

    sort(a + 1, a + l + 1, cmp);

    for (int i = 1; i <= l; i++)
    {
        cout << a[i].first << " ";
    }
}