#include <bits/stdc++.h>
#define int long long
using namespace std;
string s;
int q, l, r;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    s=' '+s;
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        int ans = 1;
        for (int i = l; i <= r -(r-l)/2; i++)
        {
            if (s[i] != s[r - (i-l)])
            {
                ans = 0;
                break;
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}