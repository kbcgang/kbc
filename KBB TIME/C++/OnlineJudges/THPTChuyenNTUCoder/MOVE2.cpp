/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;

#define kien long long
#define JAV main
#define Million 1000000
#define MOD 1000000007

kien n, m, s, t, u, v;
kien h[Million], maxx, minn, ans, l, r, mid;
vector<int> dp[Million];
bool visited[Million]; 

// Hàm DFS
bool dfs(int u, int mid) 
{
    if (u == t) // Nếu đã đến đích, trả về true
    {
        return true;
    }
    visited[u] = true; // Đánh dấu đỉnh u đã thăm
    for (int i = 0; i < dp[u].size(); i++) // Duyệt qua các đỉnh kề của u
    {
        int v = dp[u][i]; // Lấy đỉnh kề từ dp[u]
        // Kiểm tra điều kiện chênh lệch nhiệt độ
        if (!visited[v] && abs(h[u] - h[v]) <= mid)
        {
            if (dfs(v, mid)) // Nếu có đường đi, tiếp tục đệ quy
                return true;
        }
    }
    visited[u] = false; // Quay lại, đánh dấu u là chưa thăm
    return false; // Nếu không tìm thấy đường đi hợp lệ, trả về false
}

// Hàm kiểm tra độ chênh lệch tối đa
bool ktr(int mid) 
{
    memset(visited, 0, sizeof(visited)); // Reset mảng visited
    return dfs(s, mid); // Kiểm tra từ s với độ chênh lệch mid
}

// Hàm tìm giá trị độ chênh lệch nhỏ nhất
int tknp() 
{
    l = 0;
    r = 100000; // Đặt r = 100000, giả sử nhiệt độ có thể chênh lệch lớn như vậy
    int kq = -1; // Kết quả ban đầu là -1 (chưa tìm thấy kết quả hợp lệ)
    while (l <= r) 
    {
        mid = (l + r) / 2; // Lấy giá trị giữa l và r
        if (ktr(mid)) // Nếu có đường đi hợp lệ với độ chênh lệch mid
        {  
            kq = mid; // Lưu kết quả
            r = mid - 1; // Tiếp tục tìm kiếm với độ chênh lệch nhỏ hơn
        } 
        else 
        {
            l = mid + 1; // Nếu không tìm được, thử với độ chênh lệch lớn hơn
        }
    }
    return kq;  // Trả về kết quả
}

JAV() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // Nhập các tham số
    cin >> n >> m >> s >> t;
    
    // Nhập nhiệt độ các đỉnh
    for (int i = 1; i <= n; i++) 
    {
        cin >> h[i];
    }

    // Xây dựng đồ thị
    for (int i = 1; i <= m; i++) 
    {
        cin >> u >> v;
        dp[u].push_back(v);
        dp[v].push_back(u);
    }

    // Tìm độ chênh lệch nhỏ nhất có thể di chuyển
    cout << tknp() << "\n";
}

