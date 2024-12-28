///Hãy làm Sư tử, đừng làm Nai.
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[NT + 5];
kien maxx,minn, vtr,ans,l,r, dp[1000000];
kien a[100][100];

JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    ans += (m + n)*2;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == a[i][j-1])
            {                        
                ans += 1;            
            }                        
                                     
        }                            
    }                                
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    // Sort the string to get the smallest lexicographical order
    sort(s.begin(), s.end());

    // Divide the sorted string into K parts
    vector<string> parts(K);
    for (int i = 0; i < N; ++i) {
        parts[i % K] += s[i];
    }

    // Find the largest part among the K parts
    string largest_part = *max_element(parts.begin(), parts.end());

    // Output the largest part
    cout << largest_part << endl;

    return 0;
}