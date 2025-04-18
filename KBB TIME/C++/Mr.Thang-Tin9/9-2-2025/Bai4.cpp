/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a;
string b;

kien uoc(kien a, kien b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

kien chia(string b, kien a)
{
    kien ans = 0;
    for (char c : b)
    {
        ans = (ans * 10 + (c - '0')) % a;
    }
    return ans;
}

JAV()
{
    kien T;
    cin >> T;
    while (T--)
    { 
        cin >> a >> b;
        kien b_chia_a = chia(b, a);
        cout << uoc(a, b_chia_a) << '\n';
    }
}
