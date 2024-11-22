#include <bits/stdc++.h>
#define int long long
using namespace std;
string s, ans;
int k,real=INT_MIN;
int xauintoso(string s)
{
    int s=0;
    for(int i=0;i<s.size();i++)
        s=s*10+(s[i]-48);
    return s;
}
main()
{
    if (fopen("BAI4.inp", "r"))
    {
        freopen("BAI4.inp", "r", stdin);
        freopen("BAI4.out", "w", stdout);
    }
    cin >> k;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            ans += s[i];


    while (ans[0] == '0')
        ans.erase(0, 1);
    string tam = "123456789";
    for (int i = 0; i < tam.size(); i++)
    {
        int kien = ans.find(tam[i], 0);
        int m=k;
        string l;
        while(m--){
            l+=ans[kien];
            kien++;
        }
        real=max(real,xauintoso(l));
    }
   cout << ans;
}
