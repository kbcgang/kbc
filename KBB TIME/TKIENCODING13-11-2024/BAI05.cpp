///Niềm tin chính là chìa khóa giúp bạn vững tin với con đường mình đã chọn.
///Thất bại nhiều hay ít KHÔNG QUAN TRỌNGGG.
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int main() 
{
    if (fopen("BAI05.INP", "r"))
    {
        freopen("BAI05.INP", "r", stdin);
        freopen("BAI05.OUT", "w", stdout);
    }
    int d, N;
    cin >> d >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> a[i];
    }
    long long ans = 0; 
    int f = 0; 
    unordered_map<int, int> dem; 
    dem[0] = 1; 
    for (int i = 0; i < N; i++) 
    {
        f += a[i];
        int p = f % d;
        
        if (p < 0) p += d;
        
        ans += dem[p];

        dem[p]++;
    }
    cout << ans << endl;
}
