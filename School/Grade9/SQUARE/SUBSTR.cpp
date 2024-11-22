/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int k;
long long ans;
string s;
void make_answer()
{
    int l = 0, r = 0;
    int dem = 0;
    while (r < s.size() && l < s.size())
    {
        long long deml = 1, demr = 1;
        while (s[l] == '0'&&l<s.size())
        {
            deml++;
            l++;
        }
        if(l==s.size()) break;
        while (r < s.size() && dem < k)
        {
            if (s[r] == '1')
                dem++;
            r++;
        }
        if(dem<k) break;
        int right = r;
        while (right < s.size() && s[right] == '0')
        {
            demr++;
            right++;
        }
        ans += deml * demr;
        l++;
        dem--;
    }
    cout << ans;
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
    cin >> k >> s;
    make_answer();
}