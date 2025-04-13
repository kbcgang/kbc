/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
struct student
{
    int start;
    int end;
    int rent;
};
bool ascending(student a, student b)
{
    return a.end < b.end;
}
int n, m;
student a[505];
int ans[505], res = INT_MAX;
int Count[505];
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
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i].start >> a[i].end >> a[i].rent;
    sort(a+1, a+1 + m, ascending);
    // ans[0] = a[0].rent;
    for (int i = 1; i <= m+1; i++)
    {
        ans[i] = 1000000000;
        for (int j = 0; j < i; j++)
        {
            if (a[j].end >= a[i].start)
            {
                ans[i] = min(ans[i], ans[j] + a[i].rent);
                if (a[i].end >= n)
                    res = min(res, ans[i]);
            }
        }
    }
    // res = min(res, ans[i]);
    cout <<res;
}