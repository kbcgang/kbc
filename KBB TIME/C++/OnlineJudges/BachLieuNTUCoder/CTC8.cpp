/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

kien n;
bool f[NT + 5];

void sangNT()
{
    f[0] = f[1] = false;  // 0 và 1 không phải số nguyên tố
    for (int i = 2; i <= sqrt(NT); i++)  // Chỉ cần duyệt đến căn bậc 2 của NT
    {
        if (f[i] == false)  // Nếu i là số nguyên tố
        {
            for (int j = i * i; j <= NT; j += i)  // Đánh dấu các bội số của i là không phải số nguyên tố
            {
                f[j] = true;
            }
        }
    }
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    sangNT();
    
    // Tìm số nguyên tố nhỏ nhất lớn hơn n
    for (int i = n + 1; i <= NT; i++)  
    {
        if (f[i] == false)  // Nếu f[i] là 0 thì i là số nguyên tố
        {
            cout << i;
            exit(0);
        }
    }
}
