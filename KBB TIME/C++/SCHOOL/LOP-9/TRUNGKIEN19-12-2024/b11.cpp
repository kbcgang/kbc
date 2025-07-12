///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[1000000];
kien maxx, minn, vtr;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    size_t pos = s1.find(s2);
    if (pos != string::npos)
    {
        cout << pos << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }

}
