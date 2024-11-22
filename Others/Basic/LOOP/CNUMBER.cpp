#include<bits/stdc++.h>
#define int long long
using namespace std;
bool check(int n)
{
    while(n>0){
        if(n%10!=8&&n%10!=6)
            return 0;
        n/=10;
    }
    return 1;
}
int n,ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=6;i<=n;i++){
        ans+=check(i);
    }
    cout<<ans;

}
