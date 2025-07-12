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
pair<kien, kien> a[1005];
kien ax[1005], ay[1005];
map<kien, int> ppx, ppy; // Vẫn cần map để đếm tần suất tổng thể
int t, n;

JAV()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while(t--)
    {
        ppx.clear();
        ppy.clear();
        cin >> n;
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i].first >> a[i].second;
            ax[i] = a[i].first;
            ay[i] = a[i].second;
            ppx[a[i].first]++;
            ppy[a[i].second]++;
        }
        if(n == 1)
        {
            cout << "1\n";
            continue;
        }
        sort(ax, ax + n);
        sort(ay, ay + n);
        kien minX = ax[0], maxX = ax[n - 1];
        kien min2X = ax[1], max2X = ax[n - 2];
        kien minY = ay[0], maxY = ay[n - 1];
        kien min2Y = ay[1], max2Y = ay[n - 2];
        // Lấy số lần xuất hiện của các giá trị biên MỘT LẦN
        int count_minX = ppx[minX];
        int count_maxX = ppx[maxX];
        int count_minY = ppy[minY];
        int count_maxY = ppy[maxY];
        
        kien chieu_rong = maxX - minX + 1;
        kien chieu_cao = maxY - minY + 1;
        kien old = chieu_rong * chieu_cao;
        kien ans = old;
        for(int i = 0; i < n; ++i)
        {
            kien x = a[i].first;
            kien y = a[i].second;

            // Sử dụng các biến count đã tính toán sẵn
            kien x_min_moi = (x == minX and count_minX == 1) ? min2X : minX;
            kien x_max_moi = (x == maxX and count_maxX == 1) ? max2X : maxX;
            kien y_min_moi = (y == minY and count_minY == 1) ? min2Y : minY;
            kien y_max_moi = (y == maxY and count_maxY == 1) ? max2Y : maxY;

            kien rong = x_max_moi - x_min_moi + 1;
            kien cao = y_max_moi - y_min_moi + 1;
            kien ne = rong * cao;
            if(ne == n - 1)
            {
                ne += min(rong, cao);
            }
            if(ne < ans) ans = ne;
        }
        cout << ans << '\n';
    }
    return 0;
}