/*
Cho P là một tập hợp các ước số nguyên dương không nguyên tố của số nguyên dương n, hãy tìm số phần tử của tập hợp P
INPUT: Một dòng duy nhất chứa số nguyên dương n (1 ≤ n ≤ 10^14)
OUTPUT: Một dòng duy nhất chứa 1 nếu nghiệm duy nhất, 0 nếu vô nghiệm và inf nếu vô số nghiệm.
*/
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
kien n, k, m, dem;
kien maxx, minn, vtr, ans, l, r;

bool ktrnt(kien n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    ans = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            if (ktrnt(i) == false)
            {
                ans++;
            }
            if (ktrnt(n / i) == false)
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}