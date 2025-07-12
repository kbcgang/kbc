#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if(fopen("Cau2b.INP", "r"))
    {
        freopen("Cau2b.INP", "r", stdin);
        freopen("Cau2b.OUT", "w", stdout);
    }​
    long long n;
    cin>>n;
    long long s = 0;
    for (long long i=1;i<=n;i++) {
        if(i%5!=0&&i%5!=3) {
            s+=i;
        }
    }
    cout<<s;
    return 0;
}