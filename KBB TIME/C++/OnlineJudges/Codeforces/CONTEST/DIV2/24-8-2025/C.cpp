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

static inline void kbbtr(){ cout << '\n'; cout.flush(); }

kien asktr(int xtr, const vector<int>& str){
    cout << "? " << xtr << " " << (int)str.size() << " ";
    for(int vtr : str) cout << vtr << " ";
    kbbtr();
    kien anstr;
    if(!(cin >> anstr)) exit(0);
    if(anstr == -1) exit(0);
    return anstr;
}

JAV() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> alltr(n);
        iota(alltr.begin(), alltr.end(), 1);
        vector<int> ans; 
        vector<char> visa(n+1, 0);

        vector<int> pp(n+1, 1);
        for(int xtr=1; xtr<=n; ++xtr){
            kien vtr = asktr(xtr, alltr);
            pp[xtr] = (int)vtr;
        }

        int str = 1, Ltr = pp[1];
        for(int jtr=2; jtr<=n; ++jtr){
            if(pp[jtr] > Ltr){ 
                Ltr = pp[jtr]; 
                str = jtr; 
            }
        }

        vector<vector<int>> dp(Ltr+1);
        for(int vtr=1; vtr<=n; ++vtr){
            if(pp[vtr] >= 1 && pp[vtr] <= Ltr) 
                dp[pp[vtr]].push_back(vtr);
        }

        ans.reserve(Ltr);
        int curtr = str;
        ans.push_back(curtr);
        visa[curtr] = 1;
        for(int needtr = Ltr-1; needtr >= 1; --needtr){
            int nxttr = -1;
            for(int vtr : dp[needtr]){
                if(visa[vtr]) continue;
                vector<int> str2 = {curtr, vtr};
                kien rtr = asktr(curtr, str2);
                if(rtr == 2){
                    nxttr = vtr;
                    break;
                }
            }
            if(nxttr == -1){
                cout << "! 1 " << str << " ";
                kbbtr();
                continue;
            }
            ans.push_back(nxttr);
            visa[nxttr] = 1;
            curtr = nxttr;
        }

        cout << "! " << (int)ans.size() << " ";
        for(int vtr : ans) cout << vtr << " ";
        kbbtr();
    }
}
