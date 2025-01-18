///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    if(fopen("BAI5.INP","r"))
    {
       freopen("BAI5.INP","r",stdin);
       freopen("BAI5.OUT","w",stdout);
    }
    int N;
    cin >> N;
    vector<int> a(N), ans(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for (int x = 3; x < N; x++)
    {
        int p = a[x];
        int dem = 0;
        for (int i = 0; i < x - 2; i++) {
            for (int j = i + 1; j < x - 1; j++)
            {
                for (int k = j + 1; k < x; k++)
                {
                    if (a[i] + a[j] + a[k] == p)
                    {
                        dem++;
                    }
                }
            }
        }

        ans[x] = dem;
    }

    for (int i = 0; i < N; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
