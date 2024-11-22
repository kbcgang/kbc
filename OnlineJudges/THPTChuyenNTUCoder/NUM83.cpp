#include<bits/stdc++.h>
#define int long long 
using namespace std;
int num83[5000005];
void sub()
{
    int t3=0,t8=0;
    for(int i=1;i<=5e6;i++){
        if(t3+3==t8+8){
            t3+=3;
            t8+=8;
            num83[i]=t3;
        }
        else if(t3+3>t8+8){
            t8+=8;
            num83[i]=t8;
        }
        else if(t3+3<t8+8){
            t3+=3;
            num83[i]=t3;
        }
    }
}
int t,k;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sub();
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<num83[k]<<"\n";
    }
}