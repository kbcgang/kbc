// /// Hãy làm Sư tử, đừng làm Nai.😅😅😅
// /// Hãy làm thợ săn, đừng làm con mồi.
// ///  --- trungkien1252010@gmai.com ---
// /// ☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007

// JAV() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     kien t;
//     cin >> t;
//     while (t--) {
//         kien n;
//         cin >> n;
//         kien a[100005];
//         map<kien, kien> dem;
//         for (kien i = 0; i < n; i++) {
//             cin >> a[i];
//             dem[a[i]]++;
//         }
//         if (dem.size() == 1) {
//             cout << -1 << '\n';
//         } else {
//             sort(a, a + n);
//             swap(a[n - 1], a[n - 2]);
//             for (kien i = 0; i < n; i++) {
//                 cout << a[i] << ' ';
//             }
//             cout << '\n';
//         }
//     }
//     return 0;
// }







// /// Hãy làm Sư tử, đừng làm Nai.😅😅😅
// /// Hãy làm thợ săn, đừng làm con mồi.
// ///  --- trungkien1252010@gmai.com ---
// /// ☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007
// kien n ,k, a[Million], maxx, minn, ans;
// kien kc, left;
// unordered_map<kien,int> pp;

// JAV(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cin >> n >> k;
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }
//     pp.reserve(1024);
//     int left = 0;
//     for(int i = 0; i < n; i++){
//         if(pp.find(a[i]) == pp.end()){
//             pp[a[i]] = 1;
//             kc = kc + 1;
//         }
//         else{
//             pp[a[i]] = pp[a[i]] + 1;
//         }
//         while(kc > k){
//             auto it = pp.find(a[left]);
//             if(it != pp.end()){
//                 it->second = it->second - 1;
//                 if(it->second == 0){
//                     pp.erase(it);
//                     kc = kc - 1;
//                 }
//             }
//             left = left + 1;
//         }
//         int len = i - left + 1;
//         if(len > ans){
//             ans = len;
//         }
//     }

//     cout << ans << "\n";
//     return 0;
// }


// ///Hãy làm Sư tử, đừng làm Nai.😅😅😅
// ///Hãy làm thợ săn, đừng làm con mồi.
// /// --- trungkien1252010@gmai.com ---
// ///☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007
// kien t, n;

// JAV() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> t;
//     while(t--){
//         cin >> n;
//         vector<kien> a(n);
//         for(int i = 0; i < n; i++){
//             cin >> a[i];
//         }
//         bool ktr = true, check = true;
//         for(int i = 0; i + 1 < n; i++){
//             if(a[i] > a[i+1]) ktr = false;
//             if(a[i] < a[i+1]) check = false;
//         }
//         if(!ktr && !check){
//             for(int i = 0; i < n; i++){
//                 cout << a[i] << (i+1<n?' ':'\n');
//             }
//             continue;
//         }

//         if(n < 2){
//             cout << -1 << "\n";
//             continue;
//         }
//         int pos = -1;
//         for(int i = 0; i + 1 < n; i++){
//             if(a[i] != a[i+1]){
//                 pos = i;
//                 break;
//             }
//         }
//         if(pos == -1){
//             cout << -1 << "\n";
//             continue;
//         }
//         swap(a[pos], a[pos+1]);
//         for(int i = 0; i < n; i++){
//             cout << a[i] << (i+1<n?' ':'\n');
//         }
//     }
//     return 0;
// }




///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
int m, n, p, x, y, z, t;
string s;

struct KBB { 
    int x, y, dir, turns; 
};

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n >> p;
    vector<string> a(m+2, string(n+2, '0'));
    for(int i = 1; i <= m; i++){
        cin >> s;
        for(int j = 1; j <= n; j++){
            a[i][j] = s[j-1];
        }
    }
    int dx[4] = {-1,0,1,0}, dy[4] = {0,1,0,-1};
    while(p--) { 
        cin >> x >> y >> z >> t;
        if (a[x][y] == '0' || a[z][t] == '0' || a[x][y] != a[z][t]){
            cout << "NO\n";
            continue;
        }
        const int INF = 1e9;
        static int dp[1002][1002][4];
        for(int i = 0;i < m + 2; i++)
            for(int j = 0;j < n + 2; j++)
                for(int d = 0; d < 4; d++)
                    dp[i][j][d] = INF;

        deque<KBB> dq;
        for(int d=0; d<4; d++){
            dp[x][y][d] = 0;
            dq.push_back({x,y,d,0});
        }
        bool ktr = false;
        while(!dq.empty()){
            auto s = dq.front(); dq.pop_front();
            if (s.x == z && s.y == t && s.turns <= 2){
                ktr = true;
                break;
            }
            for(int i = 0; i < 4; i++){
                int j = s.x + dx[i], l = s.y + dy[i];
                if (j < 0 || j > m + 1 || l < 0 || l > n + 1) continue;
                int k = s.turns + (i != s.dir);
                if (k > 2) continue;
                if (!( (j == z && l == t) || a[j][l] == '0' )) continue;
                if (k < dp[j][l][i]){
                    dp[j][l][i] = k;
                    if (i == s.dir) dq.push_front({j,l,i,k});
                    else             dq.push_back( {j,l,i,k} );
                }
            }
        }

        if (ktr){
            cout << "YES\n";
            a[x][y] = a[z][t] = '0';
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
