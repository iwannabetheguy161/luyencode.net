// this solutions was submitted and accepted on SIMMATH problem
#include <bits/stdc++.h>
using namespace std;

const int64_t mod=998244353;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int t; cin >> t;
    while(t--) {
        int64_t a, b, c; cin >> a >> b >> c;
        a=a*(a+1)/2%mod;
        b=b*(b+1)/2%mod;
        c=c*(c+1)/2%mod;
        int64_t ans=a*b%mod*c%mod;
        cout << ans << '\n';
    }

    return 0;
}
