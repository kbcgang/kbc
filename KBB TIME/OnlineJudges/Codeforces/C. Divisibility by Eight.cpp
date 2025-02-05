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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        int num = s[i] - '0';
        if (num % 8 == 0)
        {
            cout << "YES" << "\n"
                 << num << "\n";
            return 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == '0')
                continue;
            int num = (s[i] - '0') * 10 + (s[j] - '0');
            if (num % 8 == 0)
            {
                cout << "YES" << "\n"
                     << s[i] << s[j] << "\n";
                return 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (s[i] == '0')
                    continue;
                int num = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (num % 8 == 0)
                {
                    cout << "YES" << "\n"
                         << s[i] << s[j] << s[k] << "\n";
                    return 0;
                }
            }
        }
    }

    cout << "NO" << "\n";
    return 0;
}

/// 6 => 1 5 9 13 17 21 25 29 33 37 41 45 49 53 57 61 65 69 73 77 81 85 89 93 97
/// 8 => 0 4 8 12 16 20 24 28 32 36 40 44 48 52 56 60 64 68 72 76 80 84 88 92 96
/// 2 => 3 7 11 15 19 23 27 31 35 39 43 47 51 55 59 63 67 71 75 79 83 87 91 95 99