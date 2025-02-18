/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

int dem(int n, int x) {
    return n / x;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int uochung = lcm(c, d);
    int ans = dem(b, uochung) - dem(a - 1, uochung);
    
    cout << ans << endl;
    return 0;
}
    