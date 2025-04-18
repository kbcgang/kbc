///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a[3];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a[1] >> a[2] >> a[3];
    sort (a+1,a+4);
    if (a[2] - a[1] == a[3] - a[2])
    {
        cout << a[1] - (a[2] - a[1]) << " " << a[3] + (a[2] - a[1]);
    }
    else if (a[2] - a[1] > a[3] - a[2])
    {
        cout << a[1] + (a[3] - a[2]);
    }
    else
    {
        cout << a[3] - (a[2] - a[1]);
    }
}