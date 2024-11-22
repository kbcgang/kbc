#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[200005];
map<int,int> dem;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        dem[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(dem[a[i]]%2==1){
            cout<<a[i];
            return 0;
        }
    }
}