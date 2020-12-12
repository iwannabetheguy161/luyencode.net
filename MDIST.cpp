#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin >> n;
    int a[n][2];
    for(int i=0; i<n; ++i) cin >> a[i][0] >> a[i][1];
    int ans=-1;
    for(int i=0; i<n; ++i) {
        for(int j=i+1; j<n; ++j) {
            ans=max(ans, abs(a[j][0]-a[i][0])+abs(a[j][1]-a[i][1]));
        }
    }
    cout << ans << '\n';
	
	return 0;
}
