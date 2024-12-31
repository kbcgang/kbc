///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n,k,m,dem,f[1000000];
kien maxx,minn, vtr;

int main() 
{
    int k;
    string Q;
    cin >> k; 
    cin >> Q;
    string Sa = Q.substr(0, k);
    string Sb = Q.substr(k);  
    reverse(Sa.begin(), Sa.end());
    reverse(Sb.begin(), Sb.end());
    string S = Sa + Sb;
    cout << S << endl; 

    return 0;
}
    