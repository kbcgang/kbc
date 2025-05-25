/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
#define JAV main
#define kien long long
#define Million 1000000
// Using std namespace for brevity in competitive programming
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  // Đọc giới hạn của các chướng ngại vật
  // obstacle_l[k] và obstacle_r[k] là giới hạn cho chướng ngại vật thứ k (0-indexed)
  // mà drone phải vượt qua sau khi thực hiện hành động d_k và đạt độ cao H_k
  vector<kien> obstacle_l(n), obstacle_r(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> obstacle_l[i] >> obstacle_r[i];
  }

  // Pha Tiến (Forward Pass): Tính toán khoảng độ cao khả thi
  // L_fwd[k] và R_fwd[k] sẽ lưu trữ khoảng độ cao khả thi cho H_{k-1}
  // (tức là độ cao TRƯỚC KHI áp dụng d_k, hoặc độ cao SAU KHI áp dụng d_{k-1} và vượt qua chướng ngại vật k-1)
  // L_fwd[0], R_fwd[0] là cho H_{-1} (độ cao ban đầu = 0, trước khi có d_0)
  // L_fwd[k+1], R_fwd[k+1] là khoảng cho H_k (độ cao sau khi áp dụng d_k và vượt qua chướng ngại vật k)
  vector<kien> L_fwd(n + 1);
  vector<kien> R_fwd(n + 1);

  L_fwd[0] = 0; // H_{-1} = 0
  R_fwd[0] = 0; // H_{-1} = 0
  bool possible = true;

  // Vòng lặp từ k=0 đến n-1 để xử lý d_k và chướng ngại vật thứ k
  // Kết quả sẽ được lưu vào L_fwd[k+1] và R_fwd[k+1] cho độ cao H_k
  for (int k = 0; k < n; ++k)
  {
    kien prev_L = L_fwd[k]; // Khoảng [prev_L, prev_R] là của H_{k-1}
    kien prev_R = R_fwd[k];

    kien minn; // H_k thấp nhất có thể dựa trên H_{k-1} và d_k
    kien maxx; // H_k cao nhất có thể dựa trên H_{k-1} và d_k

    if (a[k] == 0)
    {
      minn = prev_L + 0;
      maxx = prev_R + 0;
    }
    else if (a[k] == 1)
    {
      minn = prev_L + 1;
      maxx = prev_R + 1;
    }
    else
    { // a[k] == -1 (chưa biết)
      // Nếu d_k = 0, H_k nhỏ nhất là prev_L + 0
      // Nếu d_k = 1, H_k lớn nhất là prev_R + 1 (khi H_{k-1} là prev_R)
      minn = prev_L + 0;
      maxx = prev_R + 1;
    }

    // Giao với cửa sổ của chướng ngại vật thứ k
    L_fwd[k + 1] = max(minn, obstacle_l[k]);
    R_fwd[k + 1] = min(maxx, obstacle_r[k]);

    if (L_fwd[k + 1] > R_fwd[k + 1])
    {
      possible = false;
      break;
    }
  }
  if (!possible)
  {
    cout << -1 << endl;
    return;
  }
  // Pha Lùi (Backward Pass): Xây dựng lại các lựa chọn cho d_k
  vector<int> ans_d(n);
  // Bắt đầu với một giá trị H_{n-1} hợp lệ. L_fwd[n] và R_fwd[n] là khoảng cho H_{n-1}.
  // Ta có thể chọn L_fwd[n] (hoặc R_fwd[n], hoặc bất kỳ giá trị nào trong khoảng đó).
  kien current_target_H_k = L_fwd[n];

  for (int k = n - 1; k >= 0; --k)
  {
    // current_target_H_k là độ cao H_k mong muốn (sau khi áp dụng d_k và qua chướng ngại vật k)
    // Ta cần chọn d_k sao cho H_k = H_{k-1} + d_k,
    // và H_{k-1} (tức là current_target_H_k - d_k) phải nằm trong khoảng [L_fwd[k], R_fwd[k]].

    if (a[k] != -1)
    { // Nếu d_k đã được xác định từ đầu
      ans_d[k] = a[k];
    }
    else
    { // Nếu d_k = -1, ta cần chọn 0 hoặc 1
      // Ưu tiên chọn d_k = 0 nếu có thể
      kien H_k_minus_1_if_d_is_0 = current_target_H_k - 0;
      // Kiểm tra xem H_{k-1} (nếu d_k=0) có nằm trong khoảng khả thi của nó không
      if (H_k_minus_1_if_d_is_0 >= L_fwd[k] && H_k_minus_1_if_d_is_0 <= R_fwd[k])
      {
        // Lựa chọn d_k=0 là hợp lệ
        ans_d[k] = 0;
      }
      else
      {
        // Nếu d_k=0 không được, thì d_k=1 bắt buộc phải được (do pha tiến đã xác nhận là possible)
        ans_d[k] = 1;
        // Kiểm tra logic (không bắt buộc trong code nộp):
        // long long H_k_minus_1_if_d_is_1 = current_target_H_k - 1;
        // assert(H_k_minus_1_if_d_is_1 >= L_fwd[k] && H_k_minus_1_if_d_is_1 <= R_fwd[k]);
      }
    }
    // Cập nhật độ cao mục tiêu cho bước trước đó (H_{k-1})
    current_target_H_k = current_target_H_k - ans_d[k];
  }

  for (int i = 0; i < n; ++i)
  {
    cout << ans_d[i] << (i == n - 1 ? "" : " ");
  }
  cout << endl;
}

JAV()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); // Tăng tốc độ nhập xuất
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}