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
kien S;
kien n,m,pa,pb;

JAV()
{
    cin >> n >> m;
    cin >> pa >> pb;
    while (m + (pa + pb) * S < n)
    {
        S = S + 1;
    }
    cout << S;
}
    