/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
int a[1005], n, t;
void ChatGPT(int &p, int &k)
{
    int ma = -1;
    for (int i = p + 1; i + k < n; i++)
        if (a[i] > ma)
        {
            // if (k == 5)
            // {
            //     if (a[i] > 0)
            //     {
            //         p = i;
            //         ma = a[i];
            //     }
            // }
            // else
            // {
                p = i;
                ma = a[i];
            // }
        }
    // if(ma==-1){cout<<ma;exit(0);}
    cout << ma;
    t += ma;
    k--;
}
void KBCGPT()
{
    int k = 5, p = -1;
    while (k >= 0)
        ChatGPT(p, k);
    cout << "\n"
         << t;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin,s);
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            a[n++] = s[i] - 48;
    if (n < 6)
        cout << -1;
    else
        KBCGPT();
}