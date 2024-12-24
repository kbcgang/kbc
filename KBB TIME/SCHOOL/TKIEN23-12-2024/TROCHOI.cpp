/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0, j = 0;
    int minn = INT_MAX;
    while (i < n and j < n)
    {
        int sum = A[i] + B[j];
        minn = min(minn, abs(sum));
        if (sum < 0)
        {
            ++i;
        }
        else
        {
            ++j;
        }
    }
    cout << minn << endl;

    return 0;
}
