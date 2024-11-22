#include <bits/stdc++.h>
using namespace std;
#define kien long long
kien n,ans,sum,t, f[1000000], k,dem;
string s;

int main()
{
    if(fopen("bai8.INP", "r"))
    {
        freopen("bai8.INP", "r", stdin);
        freopen("bai8.OUT", "w", stdout);
    }
    cin >> n;
    cin.ignore();
        getline(cin , s);
        for (int i = 0 ; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                f[i] = f[i-1] - 1;
            }
            else
            {
                f[i] = f[i-1] + 1;
            }
        }
    for (int i = 0; i < s.size(); i++)
    {
        if (f[i] == 0)
        {
            dem++;
        }
    }
    cout << dem*(dem+1)/2;
}
