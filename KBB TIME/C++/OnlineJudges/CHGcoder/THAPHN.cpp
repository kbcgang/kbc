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

void move(kien disk, char cot, char mid, char end)
{
    if (disk == 1)
    {
        cout << cot << "->" << end << "\n";
    }
    else
    {
        move(disk - 1, cot, end, mid);
        cout << cot << "->" << end << "\n";
        move(disk - 1, mid, cot, end);
    }
}

JAV()
{
    kien n;
    cin >> n;
    move(n, 'A', 'B', 'C');
}

