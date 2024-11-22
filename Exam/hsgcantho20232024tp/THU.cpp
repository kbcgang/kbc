#include <bits/stdc++.h>
#define int long long
using namespace std;
int t;
string s;
string a;
main()
{
    if (fopen("THU.inp", "r"))
    {
        freopen("THU.inp", "r", stdin);
        freopen("THU.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t>>s;
    for (int i = 0; i < s.size(); i++)
    {
        string x;
        if (s[i] == '1')
        {
            i++;
            while (s[i] >= 'A')
            {
                x += s[i];
                i++;
            }
            i--;
        }
        else if (s[i] == '2')
        {

            i++;
            while (s[i] >= 'A')
            {
                x = s[i] + x;
                i++;
            }
            i--;
        }
        a+=x+' ';
    }
    a.erase(a.size()-1,1);
    cout<<a;
}