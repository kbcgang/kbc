#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[50005],b[50005],n;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("SEQ.inp","r")){
        freopen("SEQ.inp","r",stdin);
        freopen("SEQ.out","w",stdout);
    }
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    if(n<2) cout<<0;
    else{
        map<int,int> pos;
        for(int i=1;i<=n;i++){
            if(pos[a[i]]!=0){
                if(b[i]!=b[pos[a[i]]]){
                    cout<<0;
                    return 0;
                }
            }
            pos[a[i]]=i;
        }
    }
    cout<<1;
}
