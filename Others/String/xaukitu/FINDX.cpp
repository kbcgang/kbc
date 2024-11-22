#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    char x;
    cin>>x;
    cin.ignore();
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(x==s[i]){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
}
