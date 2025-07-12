/// Hãy làm Sư tử, đừng làm Nai.😅😅😅
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
/// ☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien a, b, c, d , t;
JAV() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--) 
    {
        
    	cin >> a >> b >> c >> d;
    	if (a < d and b <= c) {
        	if (b <= a) {
            	cout << "Gellyfish" << '\n';
        	} else {
            	cout << "Flower" << '\n';
        	}
    	}
    	else {
        	if (a >= d and b <= c) {
            	cout << "Gellyfish" << '\n';
        	}
        	else {
            	if (a < d and b >= c + 1) {
                	cout << "Flower" << '\n';
            	}
            	else {
                	if (d <= c) {
                    	cout << "Gellyfish" << '\n';
                	} else {
                    	cout << "Flower" << '\n';
                }
            }
        	}
    	}
    }

    return 0;
}
