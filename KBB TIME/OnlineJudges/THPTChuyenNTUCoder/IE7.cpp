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
kien a[6],b,c,d, e;
kien maxx,minn, vtr,ans,l,r;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
    vtr = a[1];
    for (int i = 1; i <= 5; i++)
    {
        if (a[i] == vtr)
        {
            maxx++;
        }
        else if (a[i] != vtr and ans == 0)
        {
            ans = a[i];
        }
        else if (a[i] == ans)
        {
            minn++;
        }
        else if (a[i] != ans and a[i] != vtr)
        {
            cout << "NO";
            exit(0);
        }
    }
    if (maxx == 4 or minn == 4)
    cout << "YES";
    else
    {
        cout << "NO";
    }
}