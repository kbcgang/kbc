/*
Để sắp xếp một danh sách các số nguyên và loại bỏ các phan tử trùng lặp
INPUT: Nhập n (số lượng số nguyên) và n nguyên từ bàn phím
OUTPUT: In ra dãy số nguyên đã sắp xếp theo thứ tự tăng dần và loại bỏ các phần tử trùng lặp
*/
///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem, a[1000000];
kien maxx,minn, vtr,ans[Million],l,r;
unordered_map<kien, int> pp;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (pp[a[i]] == 0)
        {
            pp[a[i]]++;
            dem++;
            ans[dem] = a[i];
        }
    }
    sort (ans + 1, ans + 1 + dem);
    for (int i = 1; i <= dem; i++)
    {
        cout << ans[i] << " ";
    }
}