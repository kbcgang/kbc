/// Made by Nguyễn Hữu Đạt

#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
string s;
double t = 0;
string ans = "0";
double trongso(string s)
{
    double t = 0;
    int c = 0;
    for (auto i : s)
        if (i >= '0' && i <= '9')
        {
            t += i - 48;
            c++;
        }
    if (c!=0)
        return 1.0*t/c;
    else
        return -1;
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
    cin >> n;
    while (n--)
    {
        cin >> s;
        double m = trongso(s);
        if (m != -1)
            if (m > t){
                ans = s;t=m;}
    }cout<<ans;
}