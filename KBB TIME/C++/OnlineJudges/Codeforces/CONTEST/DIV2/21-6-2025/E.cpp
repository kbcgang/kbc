///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() { 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--){
        int n;
        kien k;
        cin >> n >> k;
        vector<kien>a(n);
        for(auto &x:a) cin>>x;
        sort(a.begin(), a.end());

        // prefix sums of a[i] and of g(a[i]) = a(i)*(a(i)+1)/2
        vector<kien> prefA(n+1,0), prefG(n+1,0);
        for(int i=0;i<n;i++){
            prefA[i+1] = prefA[i] + a[i];
            prefG[i+1] = prefG[i] + (a[i]*(a[i]+1)/2);
        }
        kien S = prefA[n];
        kien amax = a.back();

        auto calc_f = [&](kien L)-> kien {
            // f(L) = sum clamp(a_i, L, L+k)
            int id1 = lower_bound(a.begin(), a.end(), L) - a.begin();
            int id2 = upper_bound(a.begin(), a.end(), L+k) - a.begin();
            // phần <L: id1 * L
            // phần giữa: sum a[id1..id2-1]
            // phần >L+k: (n-id2)*(L+k)
            kien sum_low   = (kien)id1 * L;
            kien sum_mid   = prefA[id2] - prefA[id1];
            kien sum_high  = (kien)(n - id2) * (L+k);
            return sum_low + sum_mid + sum_high;
        };

        // tìm L0 = min L sao cho f(L)>=S, L trong [0..amax]
        kien lo = 0, hi = amax;
        while(lo < hi){
            kien mid = (lo + hi) >> 1;
            if(calc_f(mid) >= S) hi = mid;
            else lo = mid+1;
        }
        kien L0 = lo;
        kien fL0 = calc_f(L0);
        kien L = (fL0 == S ? L0 : L0-1);
        kien fL = (fL0 == S ? fL0 : calc_f(L));

        // đếm xem cần đẩy thêm R lane
        kien R = S - fL;  // S - sum b_i  (R>=0)
        // tính sum_in = sum_{a_i<L}(L - a_i)
        int id1 = lower_bound(a.begin(), a.end(), L) - a.begin();
        kien sum_in = (kien)id1 * L - prefA[id1];

        // --- 1) Tính tổng chờ qua trạm ---
        //   sum_{a_i<L}   L(L+1)/2
        // + sum_{L<=a_i<=L+k} a_i(a_i+1)/2
        // + sum_{a_i>L+k} (L+k)(L+k+1)/2
        int id2 = upper_bound(a.begin(), a.end(), L+k) - a.begin();
        kien g_low   = (kien)id1 * (L*(L+1)/2);
        kien g_mid   = prefG[id2] - prefG[id1];
        kien g_high  = (kien)(n-id2) * ((L+k)*(L+k+1)/2);
        kien pass_anger = g_low + g_mid + g_high;
        // trong đó R lane bị đẩy thêm 1 xe => mỗi lane + (L+1)
        pass_anger += R * (L+1);

        // --- 2) Tính số xe chuyển m ---
        // m = sum_in + R  (bằng sum_{a_i>b_i}(a_i-b_i) cũng được)
        kien m = sum_in + R;

        kien total = pass_anger + k * m;
        cout << total << "\n";
    }

    return 0;
}
