#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,n;
int s[100005];
void tong()
{
    for(int i=0;i<=1e5;i++)
        s[i]=s[i-1]+i*i;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    tong();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<s[n];
    }
}