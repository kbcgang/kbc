#include<bits/stdc++.h>
using namespace std;
string s;
int res;
int tachso(int &i) {
    int so=0;
    while(s[i]>='0' && s[i]<='9') {
        so=so*10+s[i]-'0';
        i++;
    }
//    i--;
    return so;
}
int main() {
//    freopen("tachso.inp","r",stdin);
    cin>>s;
    s='a'+s;
    for(int i=0; i<s.size(); i++)
        if(s[i]>='0' && s[i]<='9') {
            res=res+tachso(i);
        }
    cout<<res;
}
