/// Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
#define Million 1000000
#define NT 10000000
#define MOD 1000000000
using namespace std;
#define kien long long

bool ktr(vector<kien>& a, kien K, kien R) 
{
    kien cock = 0, n = a.size();
    kien i = 0;
    
    while (i < n) 
    {
        cock++; 
        kien kc = a[i] + 2 * R; 
        while (i < n && a[i] <= kc) 
        {
            i++;
        }
    }
    return cock <= K;
}

int main() {
    kien N, K;
    cin >> N >> K;
    vector<kien> a(N);
    for (kien i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    kien l = 0, r = a[N - 1] - a[0];
    kien ans = r;
    
    while (l <= r) 
    {
        kien mid = (l + r) / 2;
        if (ktr(a, K, mid)) 
        {
            ans = mid;
            r = mid - 1; 
        } 
        else 
        {
            l = mid + 1; 
        }
    }
    
    cout << ans << endl;
    return 0;
}
    