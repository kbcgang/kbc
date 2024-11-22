#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[100005],ans=INT_MIN;
main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=n-2;i>0;i--)
        if(a[n-1]!=a[i]){
            ans=a[i];
            break;
        }
    printf("%d",ans);
}