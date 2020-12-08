// this solutions was submitted and accepted on DCTDN3 problem
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
    int ans=1;
    vector<int> dp(n+1, INT_MAX);
    dp[0]=INT_MIN;
    for(int i=0; i<n; ++i) {
        int k=lower_bound(dp.begin(), dp.end(), a[i])-dp.begin();
        dp[k]=a[i];
        ans=max(ans, k);
    }
    cout << ans << '\n';

    return 0;
}
