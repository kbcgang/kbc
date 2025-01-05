// ///Hãy làm Sư tử, đừng làm Nai.
// ///Hãy làm thợ săn, đừng làm con mồi.
// /// --- trungkien1252010@gmai.com ---
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007
// kien n,k,m,dem;
// kien maxx,minn, vtr,ans,l,r;

// JAV()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> n >> m;
//     string s,x, c1, c;
//     cin >> s;
//     cin >> x;
//     vector<kien> f(Million);
//     vector<kien> f1(Million);
//     for (kien i = 0; i < n; ++i)
//     {
//         f[s[i]]++;
//     }
//     for (kien i = 0; i < m; ++i)
//     {
//         f1[x[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (f[s[i]] == f1[s[i]])
//         {
//             c += s[i];
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (f1[x[i]] == f[x[i]])
//         {
//             c1 += x[i];
//         }
//     }
//     if (c.size() == 1 or c1.size() == 1)
//     {
//         cout << 1;
//     }
//     else
//     {
//         vector<kien> dp(Million);
//         for (int i = 1; i <= n; i++)
//         {

//         }
//     }
// }



/// cho hai xâu s và t. Nói xâu t chứa s nếu tồn tại một xâu con các ký tự liên tiếp nhau của t bằng s
/// ví dụ, với t = 'ABRACADABRA', nó sẽ chứa các xâu "ABRA", 'RAC', 'D', 'ÂCDABRA', 'ABRACADABRA'
/// nhưng không chứa các xâu 'ABRC'. Xâu bất kỳ luôn luôn được coi là xâu rỗng.
/// Hai xâu X = 'ABRACADABRA' và Y = 'ECADADABRBCRDARA' cùn chứa các xâu 'CA', 'CADA
/// 'ADABR' và xâu rỗng. ĐÓ là các xâu con chung cùng dudocj X và Y chứa. Trong số các xâu con này, xaau 'ADARR' có độ dài dài nhất
/// Yêu cầu: Cho hai xâu X và Y chỉ chứa các ký tự la tinh in hoa, mỗi xâu có độ dài trong phạm vi từ 1 đến 4000
/// Hãy xác định độ dài lớn nhấy của xâu con chung cùng được X và Y chứa
/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[2500][2500];
kien maxx, minn, vtr, ans;

JAV()
{
    string X, Y;
    cin >> n >> m;
    cin >> X >> Y;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (X[i-1] == Y[j-1])
            {
                f[i][j] = f[i-1][j-1] + 1;
            }
            else
            {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
            
        }
    }
    cout << f[n][m];
    return 0;
}
