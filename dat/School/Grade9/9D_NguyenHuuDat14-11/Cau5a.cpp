/// Kiên is NOT reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n;
long long a[8500];
void sub1()
{
    long ans = 0;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                if (a[i] + a[j] > a[k] && a[i] + a[k] > a[j] && a[j] + a[k] > a[i])
                    ans++;
    cout << ans << "\n";
}
int search1(int i,int j)
{
    int k;
    int l=j,r=n-1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if(a[i]+a[j]>a[m])
        {
            k=m;
            l=m+1;
        }
        else r=m-1;
    }
    return k - j;
}
void sub2()
{
    long ans = 0;
    sort(a, a + n);
    for (int i = 0; i < n-2; i++)
        for(int j=i+1;j<n-1;j++)
        {
            ans+=search1(i,j);
        }
    cout << ans;
}
// int search2(int i, int k)
// {
//     int j = k;
//     int l = i+1, r = k-1;
//     while (l <= r)
//     {
//         int m = (l + r) / 2;
//         if (a[i - 1] + a[m] > a[k + 1])
//         {
//             j = m;
//             r = m - 1;
//         }
//         else
//             l = m + 1;
//     }
//     return j;
// }
// void sub3()
// {
//     long ans = 0;
//     sort(a, a + n);
//     for (int i = 0; i < n - 2; i++)
//     {
//         for(int j=i+1;j<n-1;j++)
//         {
            
//         }
//     }
//     cout << ans;
// }
kien()
{
    // if (fopen("Cau5a.inp", "r"))
    // {
    //     freopen("Cau5a.inp", "r", stdin);
    //     freopen("Cau5a.out", "w", stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // if (n <= 400)
        // sub1();
    // else if (n<=2500)
        sub2();
    // sub3();
}