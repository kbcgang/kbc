#include<bits/stdc++.h>
#define int long long
#define MOD 1000000000
using namespace std;
int s,n;
void sub1() {
    for(int i=1; i<=n; i++)
        s=s+i*(i+1);
    cout<<s;
}
void sub2() {
    int a=n,b=n+1,c=n+2;
    if(a%3==0)
        a=a/3;
    if(b%3==0)
        b=b/3;
    if(c%3==0)
        c=c/3;
    s=(((a*b)%MOD)*c)%MOD;
    cout<<s;
}
main() {
    cin>>n;
    sub2();
}
