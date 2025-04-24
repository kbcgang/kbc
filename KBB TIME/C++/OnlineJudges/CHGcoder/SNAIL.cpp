#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, V;
    cin >> A >> B >> V;
    long long ans = (V - A) / (A - B);
    if ((V - A) % (A - B) != 0) {
        ans++; 
    }
    
    ans += 1;
    
    cout << ans << endl;
    return 0;
}
