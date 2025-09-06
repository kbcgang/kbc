/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

JAV(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <kien> g(n);
        for(int i=0;i<n;i++) cin>>g[i];
        if(n==2){
            if(g[0]>g[1]) cout<<g[0]<<"\n";
            else cout<<g[1]<<"\n";
        }
        else if(n==3){
            sort(g.begin(),g.end());
            kien cost1=g[2]+g[0];
            kien cost2=g[2]+g[1];
            if(cost1<cost2) cout<<cost1<<"\n";
            else cout<<cost2<<"\n";
        }
        else{
            sort(g.begin(), g.end());
            kien cost1=0;
            for(int i=0;i<n/2;i++) cost1+=g[n-1-i];
            if(n%2==1) cost1+=g[n/2];
            kien cost2=0;
            if(n%2==1){
                cost2+=g[0];
                for(int i=1;i<n;i+=2) cost2+=g[i+1];
            }else{
                for(int i=0;i<n;i+=2) cost2+=g[i+1];
            }
            if(cost1<cost2) cout<<cost1<<"\n";
            else cout<<cost2<<"\n";
        }
    }
}
