/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int a[100005];
int m1, m2;
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= m1)
        {
            if (a[i] >= m2)
            {
                m1 = m2;
                m2 = a[i];
            }
            else
                m1 = a[i];
        }
    }
    for (int i = 0; i < n; i++)
        if (a[i] == m2)
        {
            cout << m1 - a[i] << " ";
        }
        else
            cout << m2 - a[i] << " ";
}