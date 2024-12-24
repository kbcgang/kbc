#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,p,sum,t;
string s;

int main()
{
    if(fopen("bai3.INP", "r"))
    {
        freopen("bai3.INP", "r", stdin);
        freopen("bai3.OUT", "w", stdout);
    }
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            sum += s[j] - 48;
        }
        p = sqrt(sum);
        if (p*p == sum)
        {
            cout << 1 << "\n";
        }
        else
        {
            cout << 0 << '\n';
        }
        sum = 0;
    }
}
