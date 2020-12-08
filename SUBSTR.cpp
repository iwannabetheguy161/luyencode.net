// this solutions was submitted and accepted on SUBSTR problem
#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    string a, b; cin >> a >> b;
    int n=a.size(), m=b.size();
    a=' '+a, b=' '+b;
    int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
    for(int i=1; i<=n; ++i) {
        for(int j=1; j<=m; ++j) {
            if(a[i]==b[j])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[n][m] << '\n';

    return 0;
}
