/// Kiên is reliable!!!
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define kien main
#define mod 1000000007
using namespace std;
int n, x;
vector<int> odd, even;
kien()
{
    // if(fopen(".inp","r"))
    // {
    //     freopen(".inp","r",stdin);
    //     freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    int i = 0, j = max(odd.size(), even.size());
    while (i < j)
    {
        if (i < even.size())
        {
            cout << even[i] << " ";
        }
        if(i<odd.size())
        {
            cout << odd[i] << " ";
        }
        i++;
    }
}