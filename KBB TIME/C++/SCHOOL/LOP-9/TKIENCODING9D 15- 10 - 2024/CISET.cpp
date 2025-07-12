///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;

int main() {
    if(fopen("CISET.inp","r"))
    {
        freopen("CISET.inp","r",stdin);
        freopen("CISET.out","w",stdout);
    }
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<long long> C(n + 1, 0);

    for (int x = 4; x <= n; x++) {
        for (int i = 1; i < x; i++) {
            for (int j = i + 1; j < x; j++) {
                for (int k = j + 1; k < x; k++) {
                    if (a[i] + a[j] + a[k] == a[x]) {
                        C[x]++;
                    }
                }
            }
        }
    }

    for (int x = 1; x <= n; x++) {
        cout << C[x] << " ";
    }

    return 0;
}
