/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int t, n;
kien k;
string s;
kien a[Million];
const kien nottrue = -1000000000000000000LL;
kien R, x, tonghientai, maxDoan1, L;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        tonghientai = 0;
        maxDoan1 = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                tonghientai += a[i];
                if (tonghientai < a[i])
                {
                    tonghientai = a[i];
                }
                if (maxDoan1 < tonghientai)
                {
                    maxDoan1 = tonghientai;
                }
                if (tonghientai < 0)
                {
                    tonghientai = 0;
                }
            }
            else
            {
                tonghientai = 0;
            }
        }

        if (maxDoan1 > k)
        {
            cout << "No\n";
            continue;
        }
        int vtr = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                vtr = i;
                break;
            }
        }

        if (vtr == -1)
        {
            if (maxDoan1 == k)
            {
                cout << "Yes\n";
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << ' ';
                }
                cout << "\n";
            }
            else
            {
                cout << "No\n";
            }
            continue;
        }
        int j = vtr;
        kien tongtrai = 0;
        kien maxtrai = LLONG_MIN;
        bool coTrai = false;
        for (int i = j - 1; i >= 0; i--)
        {
            if (s[i] != '1')
            {
                break;
            }
            tongtrai += a[i];
            if (maxtrai < tongtrai)
            {
                maxtrai = tongtrai;
            }
            coTrai = true;
        }
        if (coTrai)
        {
            L = maxtrai;
        }
        else
        {
            L = 0;
        }

        kien tongphai = 0;
        kien maxphai = LLONG_MIN;
        bool coPhai = false;

        for (int i = j + 1; i < n; i++)
        {
            if (s[i] != '1')
            {
                break;
            }
            tongphai += a[i];
            if (maxphai < tongphai)
            {
                maxphai = tongphai;
            }
            coPhai = true;
        }
        if (coPhai)
        {
            R = maxphai;
        }
        else
        {
            R = 0;
        }
        kien x;
        if (L >= 0 && R >= 0)
        {
            x = k - L - R;
        }
        else
        {
            if (L >= 0 && R <= 0)
            {
                x = k - L;
            }
            else
            {
                if (L <= 0 && R >= 0)
                {
                    x = k - R;
                }
                else
                {
                    x = k;
                }
            }
        }
        cout << "Yes\n";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i == j)
                {
                    cout << x;
                }
                else
                {
                    cout << nottrue;
                }
            }
            else
            {
                cout << a[i];
            }

            if (i + 1 < n)
            {
                cout << ' ';
            }
            else
            {
                cout << '\n';
            }
        }
    }
}
