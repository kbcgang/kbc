#include<bits/stdc++.h>
using namespace std;
string s;
int n, l, r;
bool dem[40000][40000];
bool check(int i, int j, string s)
{
    for(int o = i; o <= (i + j) / 2; o++)
        if(s[o] != s[j - (o - i)])
        {
            return 0;
        }
    return 1;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
//    cout<<s.size();
    s = ' ' + s;
    cin >> n;
    while(n--)
    {
        cin >> l >> r;
        if(l == r)
            cout << "YES\n";
        else if(dem[l][r])
            cout<<"YES\n";
        else if(check(l, r, s))
        {
            cout << "YES\n";
            dem[l][r] = 1;
            while(l < r)
            {
                l++;
                r--;
                dem[l][r] = 1;
            }
        }
        else cout << "NO\n";
    }
}
