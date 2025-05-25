/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define JAV main
#define kien long long
const kien LIM = 4e8 + 5;
kien n, res;

JAV()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        kien x;
        cin >> x;
    }
    for (int i = 3; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            res += i - 1;
        }
        else
        {
            res += i - 2;
        }
    }
    cout << res;
}

/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define JAV main
#define kien long long
const kien LIM = 4e8 + 5;
bitset<LIM> mp;
vector<kien> v;
kien n, res;

JAV()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        kien x;
        cin >> x;
        v.push_back(x);
        mp[x] = 1;
    }
    if (n <= 3000)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                kien sum = v[i] + v[j];
                if (mp[sum])
                    res++;
            }
        }
        cout << res;
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                res += i - 1;
            }
            else
            {
                res += i - 2;
            }
        }
        cout << res;
    }
}
