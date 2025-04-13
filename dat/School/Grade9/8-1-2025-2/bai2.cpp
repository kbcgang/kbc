///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t;
int n;
int tcs(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;n/=10;
    }return s;
}
vector<int> prime={2,3,5,7,11,13,17};
int luythua(int a,int b,int c){
int res=1;
while(b>0){if(b&1)res=1ll*res*a%c;a=1ll*a*a%c;b/=2;}
return res;}
bool test(int a,int m,int k,int n){
int res=luythua(a,m,n);if(res==1||res==n-1)return 1;
for(int i=1;i<k;i++){res=1ll*res*res%n;if(res==n-1)return 1;
if(res==1) return 0;}return 0;}
bool MillerRabin(int n){
for(auto a:prime)if(n==a)return 1;if(n<17)return 0;
int m=n-1,k=0;while(m%2==0){k++;m/=2;}
for(auto a:prime)if(test(a,m,k,n)==0)return 0;return 1;}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(MillerRabin(n))
            cout<<"0\n";
        else{
        int ans=0,res=tcs(n);
        for(int i=2;i<=sqrt(n);i++)
            if(n%i==0)
            {
                int m=tcs(i);
                while(n%i==0)
                {
                    ans+=m;
                    n/=i;
                }
            }
        if(n>1) ans+=tcs(n);
        if(ans==res)cout<<"1\n";
        else cout<<"0\n";
 }   }
}