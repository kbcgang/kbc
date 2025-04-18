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
#define MAX 500
int a[MAX][MAX], prefix[MAX][MAX];
int M, N, a_val, b_val;

void cmp()
{
    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            prefix[i][j] = a[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }
}

int getSum(int x1, int y1, int x2, int y2)
{
    return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
}

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> a_val >> b_val;

    for (int i = 1; i <= M; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> a[i][j];
        }
    }
    cmp();
    int minValue = INT_MAX;
    for (int x1 = 1; x1 <= M; x1++)
    {
        for (int y1 = 1; y1 <= N; y1++)
        {
            for (int x2 = x1; x2 <= M; x2++)
            {
                for (int y2 = y1; y2 <= N; y2++)
                {
                    int sum = getSum(x1, y1, x2, y2);
                    int value = 2 * sum - b_val;
                    minValue = min(minValue, value);
                }
            }
        }
    }
    cout << minValue << endl;

    return 0;
}
