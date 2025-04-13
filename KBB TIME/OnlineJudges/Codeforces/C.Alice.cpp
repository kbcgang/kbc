// /// Hãy làm Sư tử, đừng làm Nai.
// /// Hãy làm thợ săn, đừng làm con mồi.
// /// --- trungkien1252010@gmai.com ---
// /// ☆*: .｡. o(≧▽≦)o .｡.:*☆
// #include <bits/stdc++.h>
// using namespace std;
// #define kien long long
// #define JAV main
// #define Million 1000000
// #define NT 10000000
// #define MOD 1000000007
// kien n, k, m, dem,  a[1000000];
// kien maxx, minn, vtr, ans, l, r, dp[1000000];
// kien t,v;
// 
// bool ktr(kien mid) 
// {
//     kien sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum += a[i];
//     }
//     kien pp = 0, dem = 0, old = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         pp += a[i];
//         if (pp >= v)
//         {
//             dem++;
//             old += pp;
//             pp = 0;
//         }
//     }
//     if (dem >= m and old <= sum - mid)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// 
// kien tknp() 
// {
//     kien l = 0, r = dp[n]; 
//     kien ans = -1;
//     while (l <= r) {
//         kien mid = (l + r) / 2;
//         if (ktr(mid)) {
//             ans = mid;
//             l = mid + 1;  
//         } else {
//             r = mid - 1;
//         }
//     }
//     return ans;
// }
// 
// JAV()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     cin >> t;
//     while (t--)
//     {
//         dp[0] = 0;
//         minn = INT_MAX;
//         cin >> n >> m >> v;
//         for (int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             dp[i] = dp[i-1] + a[i];
//         }
//         cout << tknp() << "\n";
//     }
//     
// }
//
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    
    while(t--){
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);

        int a[n];
        for(int i=0;i<n;i++)  scanf("%d",&a[i]);

        long long pref[n];
        pref[0] = a[0];
        for(int i=1;i<n;i++)  pref[i] = pref[i-1] + a[i];

        unordered_map<long long,int> pos_of_piece;
        long long sum = 0, cnt = 0;

        //For each index i from n-1 to 0 (from the end), calculate how many groups we can accomdate from n-1 to i. Lets call it pos_of_piece.
        pos_of_piece[0] = n;
        for(int i=n-1;i>=0;i--){
            sum += a[i];

            if(sum >= k){
                cnt++;
                pos_of_piece[cnt] = i;

                //cout<<cnt<< " "<<i<<endl;
                sum = 0;
            }
        } 

        long long ans = -1;
        if(pos_of_piece.count(m)){
            int p = pos_of_piece[m];
            if(p > 0)  ans = pref[p-1];
        }

      //Now start from 0, for each index i from 0 to n-1, calculate how many groups we can accomdate so far, and how many more needed.
      
        sum = 0, cnt = 0;
        for(int i=0;i<n;i++){
            sum += a[i];

            if(sum >= k){
                cnt++;
                int need = max(0LL, m - cnt);
                
              //Find pos_of_piece[needed], that index will give us which suffix we need to take for the groups. The gap between i and pos_of_piece[needed] are extra, and can be taken by Alice herself.
                if(pos_of_piece.count(need)){
                    int p = pos_of_piece[need];
                    if(p > i)  ans = max(ans, pref[p-1]-pref[i]);
                    //cout<<cnt<<": "<<pref[p-1]<<"-"<<pref[i]<<endl;
                }

                sum = 0;
            }
        }

        printf("%lld\n",ans);
    }
    
}
