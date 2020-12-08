// This solutions submitted on luyencode.net DCTDN1 problem and Accepted
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
    int dp[n], ans=1;
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
