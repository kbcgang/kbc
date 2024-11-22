#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],demc,demt;
main()
{
    if(fopen("Cau3.inp","r")){
        freopen("Cau3.inp","r",stdin);
        freopen("Cau3.out","w",stdout);
    }
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int klc=a[0],klt=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>klc){
            klc=a[i];
            demc++;
        }
        if(a[i]<klt){
            klt=a[i];
            demt++;
        }
    }
    cout<<demc<<" "<<demt;
}
