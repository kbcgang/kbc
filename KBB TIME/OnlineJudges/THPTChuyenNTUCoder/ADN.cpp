///Hãy làm Sư tử, đừng làm Nai.😅😅😅
///Hãy làm thợ săn, đừng làm con mồi.
/// --- trungkien1252010@gmai.com ---
///☆*: .｡. o(≧▽≦)o .｡.:*☆
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007

int N;
string father, mother;
set<string> results;
char child[21];

void backtrack(int index) {
    if (index == N) {
        results.insert(string(child, child + N));
        return;
    }
    child[index] = father[index];
    backtrack(index + 1);
    child[index] = mother[index];   
    backtrack(index + 1);
}

JAV() {
    cin >> N;
    cin >> father >> mother;
    backtrack(0);
    cout << results.size() << endl;
    return 0;
}
