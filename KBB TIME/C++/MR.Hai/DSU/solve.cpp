#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
#define sst string
#define pb push_back
#define maxco 100000+5
#define lld long double
#define cha ios_base::sync_with_stdio(false);
#define ffl cout.flush();
#define phi acos(-1)
#define mod 707
#define mp make_pair
#define pqpair priority_queue<pair<ll,ll> ,vector<pair<ll,ll>>,greater<pair<ll,ll>>>
#define pqpair2 priority_queue<pair<pair<ll,ll>,pair<ll,ll>>,vector<pair<pi,pair<ll,ll>>>,greater<pair<pi,pair<ll,ll>>>>
#define INF 1000000000
#define MAXN 500069
#define pi pair<ll,ll>
ll mvx[]={1,-1,0,0};
ll mvy[]={0,0,1,-1};

ll pw(ll a,ll b){
    ll vl=1;
    while(b>0){
        vl*=a;
        b--;
    }
    return vl;
}
int main(){
    ll n;
    cin>>n;
    ll w1=12*pw(4,n-3);
    ll w2=36*pw(4,n-4);
    cout<<w1*2+w2*(n-3);
}





















