///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n;
vector<int> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
//    cout<<a[0];
    sort(a.begin(),a.end());
    int j=0;
    for(int i=1; ;i++)
    {
        if(i<a[j]||i>a[j]){
            cout<<i;
            return 0;
        }
        else if(i==a[j]) j++;
    }
}
