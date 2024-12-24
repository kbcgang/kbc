///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int main() {
    if (fopen("BAI06.INP", "r"))
    {
        freopen("BAI06.INP", "r", stdin);
        freopen("BAI06.OUT", "w", stdout);
    }
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int maxx = 0;
    int sum = 0;
    unordered_map<int, int> M;
    M[0] = -1;
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
        int dem = sum % K;

        if (dem < 0) dem += K;

        if (M.find(dem) != M.end())
        {
            int L = i - M[dem];
            maxx = max(maxx, L);
        }
        else
        {
            M[dem] = i;
        }
    }

    cout << maxx << endl;
    return 0;
}
