#include <iostream>
#include <deque>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int q;
        cin >> q;
        deque<int> d;
        bool rev = false;
        int n = 0;
        long long T = 0, S = 0;
        
        while (q--) {
            int op;
            cin >> op;
            
            if (op == 1) {
                int x;
                if (!rev) {
                    x = d.back();
                    d.pop_back();
                    d.push_front(x);
                } else {
                    x = d.front();
                    d.pop_front();
                    d.push_back(x);
                }
                S = S - (long long)x * n + T;
                cout << S << "\n";
            } 
            else if (op == 2) {
                S = (long long)(n + 1) * T - S;
                rev = !rev;  // Đảo ngược trạng thái rev
                cout << S << "\n";
            } 
            else if (op == 3) {
                int k;
                cin >> k;
                if (!rev) {
                    d.push_back(k);
                } else {
                    d.push_front(k);
                }
                n++;
                T += k;
                S += (long long)k * n;
                cout << S << "\n";
            }
        }
    }
    
    return 0;
}
