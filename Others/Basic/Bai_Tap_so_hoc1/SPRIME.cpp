/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int a, b;
bool ktnt(int n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)  return 0;
    return 1;
}
vector<int> ans;
int m[4]={1,3,7,9};
void check(int a)
{
    ans.push_back(a);
    for(int j=0;j<4;j++)
        if(ktnt(a*10+m[j]))
            check(a*10+m[j]);
    return ;
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    check(2);
    check(3);
    check(5);
    check(7);
    sort(ans.begin(),ans.end());
    int x,y;
    int dau=0,cuoi=ans.size()-1;
    while(dau<=cuoi)
    {
        int mid=(dau+cuoi)/2;
        if(ans[mid]>=a){
            x=mid;
            cuoi=mid-1;
        }
        else
            dau=mid+1;
    }
    dau=0;
    cuoi=ans.size()-1;
    while(dau<=cuoi)
    {
        int mid=(dau+cuoi)/2;
        if(ans[mid]<=b)
        {
            y=mid;
            dau=mid+1;
        }
        else cuoi=mid-1;
    }
    for(int i=x;i<=y;i++)
        cout<<ans[i]<<"\n";
}