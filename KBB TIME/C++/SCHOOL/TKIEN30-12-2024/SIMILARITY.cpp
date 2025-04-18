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
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    cin >> m;
    vector<int> B(m);
    for (int i = 0; i < m; ++i)
        cin >> B[i];

    int maxx = 0, startA = -1, startB = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int len = 0;
            unordered_map<int, int> pp, pp1;

            for (int k = 0; i + k < n && j + k < m; ++k)
            {
                pp[A[i + k]]++;
                pp1[B[j + k]]++;

                if (pp == pp1)
                {
                    if (k + 1 > maxx)
                    {
                        maxx = k + 1;
                        startA = i + 1;
                        startB = j + 1;
                    }
                }
            }
        }
    }
    if (maxx > 0)
    {
        cout << maxx << " " << startA << " " << startB << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
