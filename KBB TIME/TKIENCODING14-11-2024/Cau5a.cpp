///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long

kien n, ans;
vector<kien> a;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Cau5a.INP", "r"))
    {
        freopen("Cau5a.INP", "r", stdin);
        freopen("Cau5a.OUT", "w", stdout);
    }
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) 
        {
            int k = j + 1;
            while (k < n && a[i] + a[j] > a[k]) 
            {
                k++;
            }
            ans += (k - j - 1);
        }
    }

    cout << ans << endl;
}
