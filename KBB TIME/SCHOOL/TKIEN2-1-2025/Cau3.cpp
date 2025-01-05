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
    cin >> X >> Y;
    for (int i = 1; i <= X.size(); i++)
    {
        for (int j = 1; j <= Y.size(); j++)
        {
            if (X[i-1] == Y[j-1])
            {
                f[i][j] = f[i-1][j-1] + 1;
            }
            ans = max(ans, f[i][j]);
        }
    }
    cout << ans;
    return 0;
}
