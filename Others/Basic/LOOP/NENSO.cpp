#include<bits/stdc++.h>
#define int long long
using namespace std;
int check(int n)
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    if(s>=10)
    return check(s);
    else return s;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    cout<<(n%9==0?9:n%9);

}
