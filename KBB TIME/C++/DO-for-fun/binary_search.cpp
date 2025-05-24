/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() 
{
    ios::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    kien n, c;
    string s;
    cin >> n >> c >> s;

    kien l = 0, count_a = 0, value = 0, res = 0;

    for (kien r = 0; r < n; r++) 
    {
        if (s[r] == 'a') count_a++;
        else if (s[r] == 'b') value += count_a;
        while (value > c) 
        {
            if (s[l] == 'a') 
            {
                count_a--;
            } else if (s[l] == 'b') 
            {
                value -= count_a;
            }
            l++;
        }

        res = max(res, r - l + 1);
    }

    cout << res;
}
