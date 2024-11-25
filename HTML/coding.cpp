/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define MOD 1000000007

kien n, k, t, f[Million], dp[Million], dp1[Million];

// Hàm đảo ngược số
int daoso(int n)
{
    int reversed = 0;
    while(n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

// Hàm sàng số nguyên tố
void sangNT()
{
    for(int i = 2; i < Million; i++)
    {
        f[i] = 1;
    }
    f[0] = f[1] = 0; // 0 và 1 không phải số nguyên tố
    for(int i = 2; i * i < Million; i++)
    {
        if(f[i])
        {
            for(int j = i * i; j < Million; j += i)
            {
                f[j] = 0;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // Khởi tạo
    sangNT();
    dp[0] = dp1[0] = 0;
    // Tính các mảng dp và dp1
    for(int i = 1; i < Million; i++)
    {
        dp[i] = dp[i - 1];
        dp1[i] = dp1[i - 1];
        if(f[i])
        {
            dp1[i] += i; // Tổng các số nguyên tố
            if(f[daoso(i)])
            {
                dp[i]++; // Đếm số nguyên tố có số đảo ngược cũng là nguyên tố
            }
        }
    }
    // Xử lý truy vấn
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << dp1[k] - dp1[n - 1] << " " // Tổng các số nguyên tố từ n đến k
             << dp[k] - dp[n - 1] << "\n"; // Số lượng số nguyên tố đặc biệt
    }
    return 0;
}
