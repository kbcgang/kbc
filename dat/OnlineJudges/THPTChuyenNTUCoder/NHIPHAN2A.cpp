///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<string>ans;
void check(string a,int i)
{
    if(i==n)
    {
        // int dem=0;
        // for(int j=0;j<a.size()-1;j++)
        //     if(a[j]=='0'&&a[j+1]=='1'){
        //         dem++;
        //         if(dem>1) return;
        //     }
        ans.push_back(a);
        return;
    }
    if(a.find("01",0)==-1)
        check(a+'0',i+1);
    // if(a.find("01",0)!=-1)
    check(a+'1',i+1);
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    check("",0);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";
    cout<<ans.size();
}