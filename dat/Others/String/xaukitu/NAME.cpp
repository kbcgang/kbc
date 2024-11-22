
#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
//    if(fopen(".inp","r")){
//        freopen(".inp","r",stdin);
//        freopen(".out","w",stdout);
//    }
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' '){
            if(s[i]>='a')
                s[i]-=32;
            cout<<s[i];
            i++;
            while(s[i]!=' '&&i<s.size())
            {
                if(s[i]<='Z')
                    s[i]+=32;
                cout<<s[i];
                i++;
            }
            cout<<" ";
        }
    }
}
