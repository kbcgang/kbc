/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string s;
vector<int> a;
int k, pos, n;
//nên dùng số thay xâu, dùng xâu có thể timelimit
void getFirst()
{
    int num=0;
    for (int i = 0; i <= n - k; i++)
    {
        if (a[i] > num&&a[i]!=0)
        {
            pos = i;
            num = a[i];
        }
    }
    cout<<num;
    k--;
}
void getNum()
{
    while (k > 0)
    {
        int num=-1;
        pos++;
        for (int i = pos; i <= n - k; i++)
            if (a[i] > num)
            {
                num = a[i];
                pos = i;
            }
        cout<<num;
        k--;
    }
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
    cin >> s >> k;
    for (int i = 0; i < s.size(); i++)
        if (s[i] >= '0' && s[i] <= '9')
            a.push_back(s[i]-48);
    n = a.size();
    getFirst();
    getNum();
}