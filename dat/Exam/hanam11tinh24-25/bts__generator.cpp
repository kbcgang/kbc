///Made by Nguyễn Hữu Đạt
#include<iostream>
#include<ios>
#include<cstdlib>
#include<random>
#include<chrono>
#include<ctime>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    cin.tie(0)->sync_with_stdio(0);
    int n=2+rd()%100;
    cout<<n<<'\n';
    for(int i=0;i<n;i++)
        cout<<1+rd()%50<<' ';
}