///Suck Kiên's brain is very good to your brain
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<string> a;
void check(int i,string s)
{
    if(i==n)
    {
        a.push_back(s);
        return ;
    }
    check(i+1,s+'0');
    if(s.back()!='1'||s.empty()==1)
        check(i+1,s+'1');
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    check(0,"");
    cout<<a.size()<<"\n";
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\n";
}