#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,p,sum,t,f[1000000];
string s;

int main()
{
    if(fopen("bai4.INP", "r"))
    {
        freopen("bai4.INP", "r", stdin);
        freopen("bai4.OUT", "w", stdout);
    }
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        getline(cin , s);
        for (int j = 0; j < s.size(); j++)
        {
            f[s[j]]++;
        }
        for (int j = 0; j < s.size(); j++)
        {
            if (f[s[j]] == 1)
            {
                p++;
                f[s[j]] = 0;
                cout << j + 1 << '\n';
                break;
            }
            else
            {
                f[s[j]] = 0;
            }
        }
        if (p == 0)
        {
            cout << -1 << '\n';
        }
        p = 0;
    }
}
