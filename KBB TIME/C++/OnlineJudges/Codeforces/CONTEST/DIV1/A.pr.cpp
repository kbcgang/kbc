/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main

JAV() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int deml = count(s.begin(), s.end(), '<');
        int demg = count(s.begin(), s.end(), '>');

        vector<int> re, region_large;
        for (int i = 1; i <= deml; ++i) re.push_back(i);
        for (int i = n - demg + 1; i <= n; ++i) region_large.push_back(i);

        set<int> an;
        for (int i = 1; i <= n; ++i) an.insert(i);
        for (int x : re) an.erase(x);
        for (int x : region_large) an.erase(x);

        int mid_value = *an.begin();  

        vector<int> re(n);
        re[0] = mid_value;

        vector<char> pattern;
        for (char c : s) pattern.push_back(c == '<' ? 'S' : 'L');

        int index = 1;
        for (int i = 0; i < pattern.size(); ) {
            char current_tag = pattern[i];
            int j = i + 1;
            while (j < pattern.size() && pattern[j] == current_tag) j++;
            int block_length = j - i;

            if (current_tag == 'S') {
                vector<int> sel(re.end() - block_length, re.end());
                re.erase(re.end() - block_length, re.end());
                sort(sel.rbegin(), sel.rend());
                for (int x : sel) re[index++] = x;
            } else {
                vector<int> sel(region_large.begin(), region_large.begin() + block_length);
                region_large.erase(region_large.begin(), region_large.begin() + block_length);
                sort(sel.begin(), sel.end());
                for (int x : sel) re[index++] = x;
            }

            i = j;
        }

        for (int i = 0; i < n; ++i) cout << re[i] << " ";
        cout << "\n";
    }

    return 0;
}
