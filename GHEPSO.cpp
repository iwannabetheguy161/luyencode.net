// this solutions was submitted and accepted on GHEPSO problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n; cin >> n;
    string a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n, greater<string>());
    for(string s : a) {
        cout << s;
    }
    cout << '\n';

    return 0;
}
