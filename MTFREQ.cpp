#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a;
    map<int, int> m;
    for(int i=0; i<n; ++i) {
        int x; cin >> x;
        if(!m[x])
            a.push_back(x);
        ++m[x];
    }
    cout << a.size() << '\n';
    for(int c : a) {
        cout << c << " " << m[c] << '\n';
    }

    return 0;
}
