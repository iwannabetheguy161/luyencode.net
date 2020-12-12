#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, c; cin >> n >> c;
    vector<int> a(n+1);
    for(int i=1; i<=n ;++i) cin >> a[i];
    int dp[n+1][c+1];
    memset(dp, 0, sizeof(dp));
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=c; ++j) {
            if(a[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j], a[i]+dp[i-1][j-a[i]]);
        }
    }
    cout << dp[n][c] << '\n';
	
	return 0;
}
