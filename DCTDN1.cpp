// this solutions was submitted and accepted on DCTDN1 problem
#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    int ans=1, dp[n];
    memset(dp, 0, sizeof(dp));
    for(int i=0; i<n; ++i) {
        for(int j=i; j>=0; j--) {
            if(a[i]>a[j])
                dp[i]=max(dp[i], dp[j]);
        }
        dp[i]++;
        ans=max(ans, dp[i]);
    }
    cout << ans << '\n';

    return 0;
}
