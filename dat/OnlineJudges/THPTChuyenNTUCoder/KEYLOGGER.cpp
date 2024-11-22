///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
string a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a;
    string s="";
    int pos=0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='>')
        {
            if(pos<s.size()) pos++;
        }
        else if(a[i]=='<')
        {
            if(pos>0) pos--;
        }
        else if(a[i]=='-')
        {
            if(pos>0){
                pos--;
                s.erase(pos,1);
            }
        }
        else
        {
            s.insert(pos,1,a[i]);
            pos++;
        }
//        cout<<s<<"\n";
    }
//    string s;
//    s.insert(0,1,'a');
//    s.insert(1,1,'b');
//    s.erase(1,1);
    cout<<s;
}
