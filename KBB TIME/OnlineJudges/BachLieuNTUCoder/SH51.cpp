/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
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
    int n;
    cin >> n;
    vector<string> fib(1001);
    fib[1] = "1";
    fib[2] = "1";

    for (int i = 3; i <= n; ++i)
    {
        string a = fib[i - 1], b = fib[i - 2];
        string ans = "";
        int carry = 0, sum;
        int len_a = a.size(), len_b = b.size();

        for (int j = 0; j < max(len_a, len_b); ++j)
        {
            int so_a = (j < len_a) ? a[len_a - j - 1] - '0' : 0;
            int so_b = (j < len_b) ? b[len_b - j - 1] - '0' : 0;

            sum = so_a + so_b + carry;
            carry = sum / 10;
            ans.push_back((sum % 10) + '0');
        }
        if (carry)
            ans.push_back(carry + '0');
        reverse(ans.begin(), ans.end());

        fib[i] = ans;
    }

    cout << fib[n] << endl;
    return 0;
}
    