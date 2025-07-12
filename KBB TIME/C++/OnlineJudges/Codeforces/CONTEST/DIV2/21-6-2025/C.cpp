#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        ll n, m;
        cin >> n >> m;

        // tìm root t
        ll t_found = -1;
        for(ll t = 1; t <= n; t++){
            ll Smin = t + (n - 1) * 1;
            ll Smax = t + (t * (t - 1)) / 2 + (n - t) * t;
            if (Smin <= m && m <= Smax) {
                t_found = t;
                break;
            }
        }
        if (t_found == -1) {
            cout << -1 << "\n";
            continue;
        }

        ll t = t_found;
        // dựng sao
        vector<int> parent(n+1, 0);
        for(int i = 1; i <= n; i++){
            if (i == t) parent[i] = 0;
            else parent[i] = t;
        }

        // tính tổng hiện tại = Smax
        ll cur = t + (t*(t-1))/2 + (n-t)*t;

        // hạ cấp từng v để đạt sum = m
        for(ll v = n; v >= 1 && cur > m; v--){
            if (v == t) continue;
            ll curr_dv = min(v, t);
            ll need = cur - m;
            // nếu không cần giảm nữa thì break
            if (need <= 0) break;
            // low là giá trị mới của d(v) (≥1) sao cho giảm ≤ need
            ll low = max(1LL, curr_dv - need);
            // nhưng parent[v] = x phải thỏa x < v
            if (low >= v) continue;
            ll red = curr_dv - low;
            cur -= red;
            parent[v] = (int)low;
        }

        // output
        cout << t << "\n";
        for(int i = 1; i <= n; i++){
            if (i == t) continue;
            cout << i << " " << parent[i] << "\n";
        }
    }
    return 0;
}
