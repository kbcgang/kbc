#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,ans,sum,t, f[1000000], k;
string s;

int main()
{
    if(fopen("bai7.INP", "r"))
    {
        freopen("bai7.INP", "r", stdin);
        freopen("bai7.OUT", "w", stdout);
    }
    cin >> n >> k;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            f[s[j] - 48]++;
        }
    }
    cout << f[k];
}
