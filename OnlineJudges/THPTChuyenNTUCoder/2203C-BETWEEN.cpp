#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],q,l,r,ansl,ansr;
void check1()
{
    int dau=0,cuoi=n-1;
    while(dau<=cuoi)
    {
        int giua=(dau+cuoi)/2;
        if(a[giua]==l){
            ansl=giua;
            cuoi=giua-1;
        }
        else if(a[giua]>l){
            ansl=giua;
            cuoi=giua-1;
        }
        else dau=giua+1;
    }
}
void check2()
{
    int dau=0,cuoi=n-1;
    while(dau<=cuoi){
        int giua=(dau+cuoi)/2;
        if(a[giua]==r){
            ansr=giua;
            dau=giua+1;
        }
        else if(a[giua]<r){
            ansr=giua;
            dau=giua+1;
        }
        else cuoi=giua-1;
    }
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
    sort(a,a+n);
    cin>>q;
    while(q--){
        cin>>l>>r;
        check1();
        check2();
        cout<<ansr-ansl+1<<"\n";
    }

}
