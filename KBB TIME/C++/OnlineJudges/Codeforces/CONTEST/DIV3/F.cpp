/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define JAV main
// Dùng typedef để thay đổi tên kiểu, giống như define nhưng an toàn hơn
typedef long long kien;

// Một số hằng số nếu cần, nhưng không sử dụng ở đây
// const int MILLION = 1000000;
// const int NT = 10000000;
// const int MOD = 1000000007;

// Sinh tất cả ước số từ phân tích thừa số nguyên tố
// Thay đổi thứ tự tham số và cách truyền pf (mặc dù kém hiệu quả hơn trong thực tế)
void taoUoc(int chiSo, kien tichTam, vector<kien>& ds_uoc, vector<pair<int, int>> ds_thuaSo) {
    if (chiSo == (int)ds_thuaSo.size()) {
        ds_uoc.push_back(tichTam);
        return;
    }
    pair<int, int> p_e = ds_thuaSo[chiSo]; // Không dùng structured binding
    int soNguyenTo = p_e.first;
    int mu = p_e.second;

    for (int dem = 0; dem <= mu; ++dem) {
        taoUoc(chiSo + 1, tichTam, ds_uoc, ds_thuaSo); // Gọi đệ quy trước khi nhân
        tichTam *= soNguyenTo; // Sau đó mới nhân
    }
}

// BFS từ n chia dần về 1
int bfsChia(kien so_ban_dau, int gioi_han) {
    if (so_ban_dau == 1) return 0;

    vector<pair<int, int>> danhSachThuaSo;
    {
        kien temp = so_ban_dau;
        for (int so = 2; (kien)so * so <= temp; ++so) {
            if (temp % so == 0) {
                int soLan = 0;
                while (temp % so == 0) {
                    temp /= so;
                    ++soLan;
                }
                danhSachThuaSo.emplace_back(so, soLan);
            }
        }
        if (temp > 1) {
            danhSachThuaSo.emplace_back((int)temp, 1);
        }
    }

    vector<kien> ds_uoc;
    // Thay đổi thứ tự tham số khi gọi hàm
    taoUoc(0, 1, ds_uoc, danhSachThuaSo);
    sort(ds_uoc.begin(), ds_uoc.end());

    int sl_uoc = ds_uoc.size();
    unordered_map<kien, int> banDo_id;
    banDo_id.reserve(sl_uoc * 2); // Đặt reserve ngay sau khi khai báo
    for (int i = 0; i < sl_uoc; ++i) {
        banDo_id[ds_uoc[i]] = i;
    }

    // Khai báo và khởi tạo vector dist khác đi
    vector<int> kc(sl_uoc);
    fill(kc.begin(), kc.end(), -1);

    queue<int> hangdoi; // Sử dụng queue thay vì deque nếu chỉ cần FIFO

    int vi_tri_dau = banDo_id[so_ban_dau];
    kc[vi_tri_dau] = 0;
    hangdoi.push(vi_tri_dau); // push thay cho push_back

    while (!hangdoi.empty()) {
        int chiSoHienTai = hangdoi.front();
        hangdoi.pop(); // pop thay cho pop_front

        kien giaTriHienTai = ds_uoc[chiSoHienTai];
        int buoc = kc[chiSoHienTai];

        if (giaTriHienTai == 1) {
            return buoc;
        }

        // Tái cấu trúc vòng lặp và điều kiện
        for (int i = 0; i < sl_uoc; ++i) {
            kien thuong = ds_uoc[i];
            if (thuong < 2) continue;
            if (thuong > gioi_han) break; // Ưu tiên break sớm hơn

            if (giaTriHienTai % thuong == 0) { // Đảo ngược điều kiện
                kien ans = giaTriHienTai / thuong;
                int vi_tri_moi = banDo_id[ans];
                if (kc[vi_tri_moi] == -1) {
                    kc[vi_tri_moi] = buoc + 1;
                    hangdoi.push(vi_tri_moi);
                }
            }
        }
    }
    return -1;
}

// BFS từ 1 nhân dần lên n
int bfsNhan(kien dich, int gioi_han) {
    if (dich == 1) return 0;

    vector<pair<int, int>> danhSachThuaSo;
    {
        kien temp = dich;
        for (int so = 2; (kien)so * so <= temp; ++so) {
            if (temp % so == 0) {
                int soLan = 0;
                while (temp % so == 0) {
                    temp /= so;
                    ++soLan;
                }
                danhSachThuaSo.emplace_back(so, soLan);
            }
        }
        if (temp > 1) {
            danhSachThuaSo.emplace_back((int)temp, 1);
        }
    }

    vector<kien> ds_uoc;
    taoUoc(0, 1, ds_uoc, danhSachThuaSo);
    sort(ds_uoc.begin(), ds_uoc.end());

    int sl_uoc = ds_uoc.size();
    unordered_map<kien, int> banDo_id;
    banDo_id.reserve(sl_uoc * 2);
    for (int i = 0; i < sl_uoc; ++i) {
        banDo_id[ds_uoc[i]] = i;
    }

    vector<int> kc(sl_uoc);
    fill(kc.begin(), kc.end(), -1);

    queue<int> hangdoi; // Sử dụng queue

    int vi_tri_dau = banDo_id[1];
    kc[vi_tri_dau] = 0;
    hangdoi.push(vi_tri_dau);

    while (!hangdoi.empty()) {
        int chiSoHienTai = hangdoi.front();
        hangdoi.pop();

        kien giaTriHienTai = ds_uoc[chiSoHienTai];
        int buoc = kc[chiSoHienTai];

        if (giaTriHienTai == dich) {
            return buoc;
        }

        for (int i = 0; i < sl_uoc; ++i) {
            kien nhan_vao = ds_uoc[i];
            if (nhan_vao < 2) continue;
            if (nhan_vao > gioi_han) break;

            kien ans = giaTriHienTai * nhan_vao;
            if (ans > dich) break; // Ưu tiên break sớm hơn
            if (dich % ans != 0) continue; // Điều kiện chia hết

            int vi_tri_moi = banDo_id[ans];
            if (kc[vi_tri_moi] == -1) {
                kc[vi_tri_moi] = buoc + 1;
                hangdoi.push(vi_tri_moi);
            }
        }
    }
    return -1;
}

JAV() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    kien soX, soY; // Khai báo các biến input ở đầu
    int gioiHanNhanChia;

    cin >> t;

    while (t--) {
        cin >> soX >> soY >> gioiHanNhanChia;

        if (gioiHanNhanChia == 1) {
            cout << (soX == soY ? 0 : -1) << "\n";
            continue;
        }

        kien ucln_val = __gcd(soX, soY); // Gọi std::gcd rõ ràng hơn
        kien phanX = soX / ucln_val;
        kien phanY = soY / ucln_val;

        int buocChia = bfsChia(phanX, gioiHanNhanChia);
        if (buocChia < 0) {
            cout << -1 << "\n";
            continue;
        }

        int buocNhan = bfsNhan(phanY, gioiHanNhanChia);
        if (buocNhan < 0) {
            cout << -1 << "\n";
            continue;
        }

        cout << (buocChia + buocNhan) << "\n";
    }

    return 0;
}