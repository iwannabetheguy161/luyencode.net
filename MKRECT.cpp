#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    vector<int64_t> a(n), b;
    map<int64_t, int> m;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        ++m[a[i]];
        if(m[a[i]]%2==0)
            b.push_back(a[i]);
    }
    sort(b.begin(), b.end(), greater<int64_t>());
    int64_t ans=b[0]*b[1];
    cout << ans << '\n';
	
	return 0;
}
