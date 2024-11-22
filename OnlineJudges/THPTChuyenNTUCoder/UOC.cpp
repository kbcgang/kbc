#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,x;
bool check(int n)
{
    int dem=0;
    if(n<=3) return 0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0)
            dem+=2;
        if(i*i==n)
            dem--;
        if(dem>3)
            return 0;
    }
    return dem==3;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x;
        if(check(x)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}