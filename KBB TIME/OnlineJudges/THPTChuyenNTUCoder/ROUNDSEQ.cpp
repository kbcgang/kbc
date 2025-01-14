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
int n;
vector<int> a(1000000);
vector<int> f(1000000);

void sortDigits(int x) 
{
    for (int i = 1; i <= x; ++i) 
    {
        for (int j = i + 1; j <= x; ++j) 
        {
            if (a[i] > a[j]) 
            {
                swap(a[i], a[j]);
            }
        }
    }
}

int solve(int x) 
{
    int i = 0, j = x;
    while (j != 0) 
    {
        i++;
        a[i] = j % 10;
        j /= 10;
    }
    sortDigits(i);
    x = 0;
    for (int j = 1; j <= i; ++j) 
    {
        x = x * 10 + a[j];
    }
    return x;
}

JAV() 
{
    cin >> n;
    f[1] = 1;
    for (int i = 2; i <= 50; ++i) 
    {
        f[i] = solve(f[i - 1] * 2);
    }
    if (n <= 25) 
    {
        cout << f[n];
        return 0;
    }
    cout << f[25 + (n - 25) % 6];
    return 0;
}
    