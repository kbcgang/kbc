/// Hãy làm chồn đừng làm nai
/// Hãy làm thợ săn đừng làm con mồi
/// --- trungkien1252010@gmail.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n;

JAV()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     cin >> n;
     if (LLONG(sqrt(n))*LLONG(sqrt(n)) == n)
     {
          cout << n;
     }
     else
     {
          cout << pow(int(sqrt(n)) + 2, 2);
     }
}
