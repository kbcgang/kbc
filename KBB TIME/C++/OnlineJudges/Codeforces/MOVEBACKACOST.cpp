/// Hãy làm Sư tử, đừng làm Nai.
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

kien n, k, m, dem, f[Million + 5];
kien maxx, minn, vtr, ans, l, r, dp[1000000];
vector <kien> a;

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    kien t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        a.resize(n);  // resize vector đúng với n phần tử
        minn = INT_MAX;
        
        // Nhập dữ liệu vào vector a
        for (int i = 0; i < n; i++)
        {
            cin >> a[i]; // lưu vào vector từ chỉ số 0
        }

        // Xử lý mảng để đạt được mảng nhỏ nhất lexicographically
        while (true)
        {
            int i = 0;
            // Tìm phần tử nhỏ nhất trong mảng mà không sắp xếp hoàn toàn
            while (i < n - 1 && a[i] <= a[i + 1]) 
                i++; 
            
            // Nếu mảng đã được sắp xếp, thoát khỏi vòng lặp
            if (i == n - 1) break;

            // Di chuyển phần tử nhỏ nhất xuống cuối và kiểm tra
            if (a[i] < a[i + 1]) {
                a.push_back(a[i] + 1);  // Chỉ tăng giá trị phần tử nếu cần thiết
                a.erase(a.begin() + i); // Xóa phần tử tại vị trí i
            }
        }

        // In kết quả sau khi xử lý xong
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";  // in từ chỉ số 0 đến n-1
        }
        cout << "\n";
    }
}


