//#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second
#define bit(i, x) ((x >> i) & 1)
#define SZ(x) ((int)(x.size()))
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define task "MIN"
#define ii pair<int,int>

using namespace std;

//mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());
//ll rand(ll l, ll r) { assert(l <= r); return uniform_int_distribution<ll>(l, r)(rd); }

const int MAXn = 1e5 + 6;
const ll MOD = 1e18 ;
const long double BASE = 1e-8 ;
const int BL = 320;

int k , n = 0 , a [ MAXn ] , dp [ MAXn ] ;
pair < int , int > it [ MAXn * 4 ] ;
string s , res ;

ii Min ( ii x , ii y ) {
    return ( x.fi <= y.fi ? x : y ) ;
}

void upd ( int u , int val , int idx = 1 , int l = 1 , int r = n ) {
    if ( l > u || r < u ) return ;
    if ( l == r ) {
        it [ idx ] = { val , l } ;
        return ;
    }
    int mid = ( l + r ) >> 1 ;
    upd ( u , val , idx << 1 , l , mid ) ;
    upd ( u , val , idx << 1 | 1 , mid + 1 , r ) ;
    it [ idx ] = Min ( it [ idx << 1 ] , it [ idx << 1 | 1 ] ) ;
}

ii get ( int u , int v , int idx = 1 , int l = 1 , int r = n )  {
    if ( l > v || r < u ) { return { BL , BL } ; }
    if ( l >= u && r <= v ) { return it [ idx ] ; }
    int mid = ( l + r ) >> 1 ;
    return Min ( get ( u , v , idx << 1 , l , mid ) , get ( u , v , idx << 1 | 1 , mid + 1 , r ) ) ;
}

void solve() {
    cin >> k >> s ;
    int vt = 0 ;
    for ( int i = 0 ; i < SZ ( s ) ; i ++ ) if ( s [ i ] >= '0' && s [ i ] <= '9' ) n ++ ;
    for ( int i = 0 ; i < SZ ( s ) ; i ++ ) if ( s [ i ] >= '0' && s [ i ] <= '9' ) upd ( ++vt , s [ i ] - '0' ) ;
    int pos = 1 ;
    for ( int i = k; i >= 1 ; i -- ) {
        ii st = get ( pos , n - i + 1 ) ;
        res = res + char ( st.fi + '0' ) ;
        pos = st.se + 1 ;
    }
    cout << res ;
}

int32_t main() {
    if (fopen(task".inp", "r")) { freopen(task".inp", "r", stdin); freopen(task".out", "w", stdout); }
    ios::sync_with_stdio(0); cin.tie(0);
    int ntest = 1; //cin >> ntest;
    while (ntest--) solve();
    cerr << "\n" << 1.0 * clock() / CLOCKS_PER_SEC << "s ";
}
