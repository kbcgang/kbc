#include<bits/stdc++.h>
using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
        s+='0';
    cout<<s<<"\n";
    for(int i=0;i<s.size();i++){
        s[i]='1';
        cout<<s<<"\n";
    }

}
