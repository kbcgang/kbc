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
kien tong1, tong2;

int count2numberfirst(int n)
{
    n /= 10;
    n /= 10;
    int sum1 = n % 10;
    n /= 10;
    int sum2 = n % 10;
    return sum1 + sum2;
}

int count2numberlast(int n)
{
    int sum1 = n % 10;
    n /= 10;
    int sum2 = n % 10;
    return sum1 + sum2;
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    tong1 = (s[0] - 48) * 10 + (s[1] - 48);
    tong2 = (s[2] - 48) * 10 + (s[3] - 48);
    for (int i = 1000; i <= 9999; i++)
    {
        if (count2numberfirst(i) == tong2 and count2numberlast(i) == tong1)
        {
            cout << i;
            exit(0);
        }
        else if (count2numberfirst(i) == tong1 and count2numberlast(i) == tong2)
        {
            cout << i;
            exit(0);
        }
    }
    cout << 0;
}