#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int dem;
char k;
main()
{
    freopen("Cau4.inp","r",stdin);
    freopen("Cau4.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin,s);
    cin>>k;
    for(int i=0;i<s.size();i++){
        if(s[i]==k||s[i]+32==k||s[i]-32==k)
            dem++;
        if(s[i]<='Z'&&s[i]!=' ')
            s[i]+=32;
    }
    cout<<dem<<"\n"<<s;
}
