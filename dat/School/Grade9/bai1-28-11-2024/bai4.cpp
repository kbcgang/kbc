#include <bits/stdc++.h>
using namespace std;
int j;
string s, ans;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for(int i=s.size()-1;i>-1;i=i-2) cout<<s[i];
    if(s.size()%2==0) j=1;
    while(j<s.size()){
        cout<<s[j];
        j=j+2;
    }
}