#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int m, n; cin >> m >> n;
    int a[m+2][n+2];
    for(int i=0; i<=n; ++i)
        a[0][i]=a[m+1][i]=INT_MIN;
    for(int i=1; i<=m; ++i) {
        for(int j=1; j<=n; ++j) cin >> a[i][j];
    }
    for(int j=2; j<=n; ++j) {
        for(int i=1; i<=m; ++i) {
            a[i][j]+=max(a[i+1][j-1], max(a[i][j-1], a[i-1][j-1]));
        }
    }
    int ans=INT_MIN;
    for(int i=1; i<=m; ++i) {
        ans=max(ans, a[i][n]);
    }
    cout << ans << '\n';
	
	return 0;
}
