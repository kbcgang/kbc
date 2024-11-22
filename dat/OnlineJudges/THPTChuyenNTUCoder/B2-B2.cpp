#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[105],ans=0;
int tongcs(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if((tongcs(a[i])+tongcs(a[j]))%9==0)
                ans++;
    cout<<ans;
}