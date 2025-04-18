#include <bits/stdc++.h>
using namespace std;

// Hàm tính giá trị x lớn nhất
int findMaxGoodValue(int n, const vector<int>& a) {
    unordered_map<int, int> frequency;

    // Tính tần số xuất hiện của các phần tử
    for (int num : a) {
        frequency[num]++;
    }

    // Số lượng giá trị phân biệt
    int distinctCount = frequency.size();

    // Tần số lớn nhất
    int maxFrequency = 0;
    for (const auto& [key, value] : frequency) {
        maxFrequency = max(maxFrequency, value);
    }

    // Giá trị x lớn nhất
    return min(distinctCount, maxFrequency);
}

int main() {
    // Đọc dữ liệu đầu vào
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Tìm và in kết quả
    cout << findMaxGoodValue(n, a) << endl;

    return 0;
}
