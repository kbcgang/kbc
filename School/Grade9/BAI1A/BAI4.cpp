/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
// dùng tham lam
string s, n, ans;
int k, pos;
void get_first()
{
// với số đầu tiên, chọn số bé nhất !=0 từ 0 -> n.size()-k
// chốt vị trí
    while(n[0]=='0')
        n.erase(0,1);
    char Min=n[0];
    for (int j = 1; j <= n.size() - k; j++)
    {
        if (n[j] < Min && n[j] != '0')
        {
            pos = j;
            Min = n[j];
        }
    }
    ans.push_back(Min);
}
void get_lower(int i)
{
    //với mỗi số pos+1, chọn số bé nhất từ pos+1 -> n.size()-i
    pos++;
    char Min = n[pos];
    for (int j = pos; j <= n.size() - i; j++)
    {
        if (n[j] < Min)
        {
            pos = j;
            Min = n[j];
        }
    }
    ans.push_back(Min);
}
void make_smallest()
{

    get_first();
    for (int i = k - 1; i > 0; i--)
    {
        get_lower(i);
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
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            n.push_back(s[i]);
    // cout<<n;
    make_smallest();
}