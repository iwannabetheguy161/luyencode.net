#include <bits/stdc++.h>
using namespace std;

const int mxN=1e6;
int64_t dp[mxN+1];

void pre() {
    dp[2]=1;
    for(int i=3; i<=mxN; ++i) {
        dp[i]=dp[i-1]+(i-1);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    memset(dp, 0LL, sizeof(dp));
    pre();
    int n; cin >> n;
    cout << dp[n] << '\n';
	
	return 0;
}
