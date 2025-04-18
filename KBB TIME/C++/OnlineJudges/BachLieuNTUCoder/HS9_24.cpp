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
string s;

int main()
{
    cin >> s;
    int num = s.size();
    int tong = 0;
    for (char c : s)
    {
        tong += (c - '0');
    }
    cout << num << "\n";
    cout << tong << "\n";

    return 0;
}
