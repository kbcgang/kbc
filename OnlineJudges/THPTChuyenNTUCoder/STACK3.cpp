///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
//#define int long long
#define mod 1000000007
using namespace std;
string s;
vector<char> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{'||s[i]=='('||s[i]=='['){

            if(s[i]=='{') a.push_back('}');
            else if(s[i]=='[') a.push_back(']');
            else a.push_back(')');
        }
        else{
            if(a.size()==0){
                cout<<"NO";
                return 0;
            }
            char m=a.back();
            a.pop_back();
            if(m!=s[i]){
                cout<<"NO";
                return 0;
            }
        }
    }
    if(a.size()>0) cout<<"NO";
    else cout<<"YES";
//    vector<char> a={'k'};
//    cout<<a.back();
}
