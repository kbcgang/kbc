#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define vip ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s,x;
int m,vtri,chu[300];
main()
{
    vip;
    freopen("BAI3.INP","r",stdin);
    freopen("BAI3.OUT","w",stdout);
    getline(cin,s);
    int n=s.size();
    s=' '+s;
    int cuoi=0;
    for(int dau=1;dau<n;dau++){
        while(cuoi<n&&chu[s[cuoi+1]]<1){

            cuoi++;
            chu[s[cuoi]]++;
        }
        if(cuoi-dau+1>m){
            m=cuoi-dau+1;
            vtri=dau;
        }
        chu[s[dau]]--;
    }
    cout<<vtri<<" "<<m;
}
