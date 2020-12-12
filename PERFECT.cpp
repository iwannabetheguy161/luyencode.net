#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a, a+n, greater<int>());
    int ans=a[0]-a[1];
    for(int i=1; i+1<n; ++i) {
        ans=min(ans, a[i]-a[i+1]);
    }
    cout << ans << '\n';
	
	return 0;
}
