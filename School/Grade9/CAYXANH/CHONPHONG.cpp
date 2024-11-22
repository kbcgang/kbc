/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, k, ans = 10000000;
string s;
void room()
{
    int teacherroom;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            dem++;
            if (dem == k / 2+1)
            {
                teacherroom = i;
                break;
            }
        }
    }
    // cout<<"teacher's room: "<<teacherroom<<"\n";
    dem = -1;
    int l = 0, r = 0;
    while (s[l] == '1' && l < n)
    {
        l++;
    }
    r = l;
    while (dem < k && r < n)
    {
        if (s[r] == '0')
            dem++;
        r++;
    }
    r--;
    // cout<<"first student's room: "<<l<<"\n";
    // cout<<"last student's room: "<<r<<"\n";
    while (r < n)
    {
        ans = min(ans, max(r - teacherroom, teacherroom - l));
        teacherroom++;
        while (s[teacherroom] != '0')
            teacherroom++;
        if (k % 2 == 1)
        {
            ans = min(ans, max(r - teacherroom, teacherroom - l));
            // teacherroom++;
            // while (s[teacherroom] != '0')
            //     teacherroom++;
        }
        l++;
        while (s[l] == '1' && l < n)
            l++;
        r++;
        while (s[r] == '1' && r < n)
            r++;
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
    cin >> n >> k;
    cin >> s;
    room();
}
/*
15 10
000001000000000

10 2
0000000000
*/