#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,c,t;
vector<int> a;
main()
{
    if(fopen("MUADO.INP","r")){
        freopen("MUADO.INP","r",stdin);
        freopen("MUADO.OUT","w",stdout);
    }
    cin>>n>>c;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    c-=a[a.size()-1];
    a.erase(a.size()-1);
    int dau=0,cuoi=a.size()-1,vtri=-1;
    while(dau<=cuoi){
        int giua=(cuoi+dau+1)/2;
         if((c-a[giua])>1){
            dat=giua+1;
            vtri=giua;
        }
        else cuoi=giua-1;
    }
    t+=a[vtri];
    cout<<t;
}