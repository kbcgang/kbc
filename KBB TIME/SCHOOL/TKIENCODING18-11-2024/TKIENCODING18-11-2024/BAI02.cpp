///Sức mạnh của lòng kiêu hãnh --- trungkien1252010@gmail.com ----
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, A[100000], dem;

bool ktr(kien x) 
{
    if (x <= 1) 
        return false;
    for (kien i = 2; i * i <= x; ++i) {
        if (x % i == 0) return false;
    }
    return true;
}

kien maintain(kien n, set<kien>& a) {
    for (kien i = 1; ; ++i) {
        if (a.find(i) == a.end()) {
            return i;
        }
    }
}

int main() 
{
    cin >> n;
    set<kien> a;
    dem = 0;
    for (kien i = 0; i < n; ++i) 
    {
        cin >> A[i];
        a.insert(A[i]);
        if (ktr(A[i])) 
        {
            dem++;
        }
    }
    cout << dem << '\n';
    cout << maintain(n, a) << '\n';

    return 0;
}
