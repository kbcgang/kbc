///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem;
kien maxx,minn, vtr,ans,l,r;
kien a[Million], f[Million];

void sangNT()
{
    for (int i = 2; i <= Million; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 1;
    for (int i = 2; i <= sqrt(Million); i++)
    {
        if (f[i])
        {
            for (int j = i*i; j <= Million; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNT();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> ans; 
        k = sqrt(ans); 
        if (k*k == ans and ans > 1)
        {
            if (f[k])
            {
                dem++;
            }
        }  
    }
    cout << dem;

}