#include <bits/stdc++.h>
using namespace std;
#define JAV main
using pii = pair<int,int>;
const int INF = 1e9;

int n, k;
vector<int>a;
vector<int> p;

bool check(int v, int &bestL, int &bestR) {
    p.assign(n+1, 0);
    for(int i=1;i<=n;i++){
        p[i] = p[i-1] + (a[i] >= v ? 1 : -1);
    }
    array<int,2> f = {0, INF};
    array<int,2> minn = {0, -1};
    f[0] = 0; minn[0] = 0;
    f[1] = INF; minn[1] = -1;

    for(int r = k; r <= n; r++){
        int j = r - k;
        int par = j & 1;
        if(p[j] < f[par]) {
            f[par] = p[j];
            minn[par] = j;
        }
        int parR = r & 1;
        if(f[parR] < INF && p[r] - f[parR] >= 0){
            bestL = minn[parR] + 1;
            bestR = r;
            return true;
        }
        if(f[parR^1] < INF && p[r] - f[parR^1] >= 1){
            bestL = minn[parR^1] + 1;
            bestR = r;
            return true;
        }
    }
    return false;
}

JAV(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--){
        cin >> n >> k;
        a.assign(n+1,0);
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int lo = 1, hi = n+1;
        int ansV = 1, ansL = 1, ansR = k;
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            int L, R;
            if(check(mid, L, R)){
                ansV = mid;
                ansL = L;
                ansR = R;
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        cout << ansV << " " << ansL << " " << ansR << "\n";
    }

    return 0;
}
