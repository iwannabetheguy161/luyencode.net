#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string s; cin >> s;
    s=' '+s;
    int n=s.size();
    bool dp[n+1][n+1];
    memset(dp, false, sizeof(dp));
    for(int i=1; i<=n; ++i) dp[i][i]=true;
    for(int i=1; i<=n-1; ++i) dp[i+1][i]=true;
    for(int k=1; k<=n-1; ++k) {
        for(int i=1; i<=n-k; ++i) {
            int j=i+k;
            dp[i][j]=(dp[i+1][j-1]&&s[i]==s[j]);
        }
    }
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        if(dp[l][r])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	
	return 0;
}
