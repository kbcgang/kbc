/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int a[5005], n, ans;
long dem[5005],b[1000005];
void sub1()
{
    for (int i = 0; i < n - 3; i++)
        for (int j = i + 1; j < n - 2; j++)
            for (int k = j + 1; k < n - 1; k++)
                for (int x = k + 1; x < n; x++)
                    if (a[i] + a[j] + a[k] == a[x])
                        dem[x]++;
}
void sub15()
{
    b[a[n-1]]++;
    for(int i=n-2;i>=2;i--)
        for(int j=i-1;j>=1;j--)
            for(int k=j-1;k>=0;k--)
                
}
kien()
{
    if (fopen("CISET.inp", "r"))
    {
        freopen("CISET.inp", "r", stdin);
        freopen("CISET.out", "w", stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 95)
        sub1();
    // sub2();
    for (int i = 0; i < n; i++)
        cout << dem[i] << " ";
}