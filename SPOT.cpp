#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; ++i) cin >> a[i] >> b[i];
    sort(a, a+n);
    sort(b, b+n);
    int p=n/2;
    int64_t ans=0;
    for(int i=0; i<n; ++i) {
        ans+=abs(a[i]-a[p])+(b[i]-b[p]);
    }
    cout << ans << '\n';

    return 0;
}
