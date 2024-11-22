#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int gt(int n)
{
    int s=1;
    for(int i=2;i<=n;i++)
        s*=i;
    return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=2;i<=n;i++){
        if(ktnt(i)&&ktnt(abs(i-n+i)))
            ans+=gt(n)/(gt(i)*gt(n-i));///công thức tính số cách sắp xếp
    }
    cout<<ans;

}
