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
kien start, end, l, r;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    int ans = 0;
    int n = min(s.size(), s1.size());

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s1.size(); j++)
        {
            if (s[i] == s1[j])
            {
                int k = 0;
                while (i + k < s.size() && j + k < s1.size() && s[i + k] == s1[j + k])
                {
                    k++;
                }
                if (k > ans)
                {
                    ans = k;
                    l = i;
                    r = j;
                }
            }
        }
    }
    for (int i = l; i < l + ans; i++)
    {
        cout << s[i];
    }

}