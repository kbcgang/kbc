/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
#define JAV main
using namespace std;
int n,d,k,t;
JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int tong1=n*(n+1)/2;
    for(int i=1;i*i<=n;i++)
    {
        t+=i*i;
    }
    cout<<tong1-t;  
}