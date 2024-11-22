/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
///#include <cstdlib>
///#include <ctime>
// #define int long long
#define kien main
#define int long
#define mod 1000000007
using namespace std;
int n, a[100005];
int l[100005], r[100005];
void sub1()
{
    int ans = 0;
    for (int i = 0; i <= n - 4; i++)
        for (int j = i + 1; j <= n - 3; j++)
            for (int k = j + 1; k <= n - 2; k++)
                for (int p = k + 1; p <= n - 1; p++)
                    ans = max(ans, __gcd(a[i], a[j]) + __gcd(a[k], a[p]));
    cout << ans;
}
void sub2()
{
    int ans = 0;
    for (int i = 0; i < n - 3; i++)
        for (int j = i + 1; j < n - 2; j++)
            l[j] = max(l[j], __gcd(a[i], a[j]));
    for (int i = n - 1; i >= 3; i--)
        for (int j = i - 1; j >= 2; j--)
            r[j] = max(r[j], __gcd(a[i], a[j]));
    for (int i = 3; i < n - 1; i++)
        ans = max(ans, l[i - 1] + r[i]);
    cout << ans;
}
void make_left(int pos,int dem[]) /// đếm số lượng các số chia hết
{
    l[pos] = l[pos - 1];
    for (int i = 1; i * i <= a[pos]; i++)
    {
        if (a[pos] % i == 0)
        {
            dem[i]++; /// đếm số lượng số chia hết cho a[pos]
            if (i * i != a[pos])
                dem[a[pos] / i]++;
            if (dem[i] > 1) /// tồn tại ước chung của các số < pos
                            /// ví dụ: 8 có 1,2,4,8
                            /// 12 có 1,2,3,4,6,12
                            ///->có 1,2,4
            {
                l[pos] = max(l[pos], i); /// lấy giá trị lớn nhất(tính chất max dồn)
                // dem[i] = 0;
            }
            if (dem[a[pos] / i] > 1)
                l[pos] = max(l[pos], a[pos] / i);
        }
    }
}
void make_right(int pos,int dem[])
{
    // for(int i=0;i<50;i++)
    //     cout<<dem[i]<<" ";
    r[pos] = r[pos + 1];
    for (int i = 1; i * i <= a[pos]; i++)
    {
        if (a[pos] % i == 0)
        {
            dem[i]++;
            if (i * i != a[pos])
                dem[a[pos] / i]++;
            if (dem[i] > 1)
            {
                r[pos] = max(r[pos], i);
                // dem[i] = 0;
            }
            if (dem[a[pos] / i] > 1)
                r[pos] = max(r[pos], a[pos] / i);
        }
    }
    cout<<"\n";
}
void sub3()
{
    int ans = 0;
    int dem[100005] = {};
    for (int i = 0; i < n - 2; i++)
        make_left(i,dem);           ///tạo maxgcd dồn
    // for (int i = 0; i < n - 2; i++)
    //     cout << l[i] << " ";
    fill(dem,dem+100005,0);
    for (int i = n - 1; i >= 2; i--)
        make_right(i,dem);
    // cout << "\n";
    // for (int i = n - 1; i >= 2; i--)
    //     cout << r[i] << " ";
    for (int i = 1; i < n - 2; i++)
        ans = max(ans, l[i] + r[i + 1]);
    cout << ans;
}
kien()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("CAU4.inp","r"))
    {
        freopen("CAU4.inp","r",stdin);
        freopen("CAU4.out","w",stdout);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 50)
        sub1();
    else if (n <= 1e3)
        sub2();
    else
    {
        sub3();
    }
    // sub3();
}