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
kien n,k,m,dem,f[NT + 5], a[1000000];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
kien b[Million];


void sanguoc()
{
    for (int i = 1; i <= Million; i++)
    {
        f[i] = 1;
    }   
    f[0] = f[1] = 0;
    for (int i = 2; i <= Million; i++)
    {
        for (int j = i * 2; j <= Million; j += i)
        {
            f[j]++;
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    //// if you see me calling thì xin em khong nhắc máy mà nếu như em lỡ nghe rồi thì cho anh xin nốt lần này
    //// gặp cây bút chì can you see that if you see me calling
}