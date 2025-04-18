#include "iostream"
using namespace std;
long long n;
void compute()
{
    if (n <= 1)
    {
        cout << n;
        return;
    }
    long long prev1 = 1, prev2 = 0, cur = 0;
    for (long long i = 2; i <= n; i++)
    {
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    cout << cur;
}
int main()
{
    cin >> n;
    compute();
}