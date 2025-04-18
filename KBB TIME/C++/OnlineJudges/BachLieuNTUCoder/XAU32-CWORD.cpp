///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;
kien c[Million], o[Million], w[Million];
kien pc[Million], po[Million], pw[Million];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'C')
        {
            c[i] = c[i - 1] + 1;
            o[i] = 0;
            w[i] = 0;
        }
        else if (s[i] == 'O')
        {
            c[i] = 0;
            o[i] = o[i - 1] + 1;
            w[i] = 0;
        }
        else if (s[i] == 'W')
        {
            c[i] = 0;
            o[i] = 0;
            w[i] = w[i - 1] + 1;
        }
    }
    c[n + 1] = 0;
    o[n + 1] = 0;
    w[n + 1] = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if (c[i] == 0 and c[i-1] > 0)
        {
            dem++;
            pc[dem] = c[i-1];
        }
        else if (o[i] == 0 and o[i-1] > 0)
        {
            dem++;
            po[dem] = o[i-1];
        }
        else if (w[i] == 0 and w[i-1] > 0)
        {
            dem++;
            pw[dem] = w[i-1];
        }
    }
    for (int i = 1; i <= dem; i++)
    {
        if (pc[i] > 0)
        {
            for (int j = i + 1; j <= dem; j++)
            {
                if (po[j] > 0)
                {
                    for (int k = j + 1; k <= dem; k++)
                    {
                        if (pw[k] > 0)
                        {
                            vtr += pc[i] * po[j] * pw[k];
                        }
                    }
                }
            }
        }
        ans = max(ans, vtr);
    }
    cout << ans;
}