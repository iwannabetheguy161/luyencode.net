#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string s; cin >> s;
    s=' '+s;
    int n=s.size(), dp[n+1][n+1];
    memset(dp, 0, sizeof(dp));
    for(int i=1; i<=n; ++i) {
        for(int j=n; j>=1; j--) {
            if(s[i]==s[j])
                dp[i][j]=dp[i-1][j+1]+1;
            else
                dp[i][j]=max(dp[i-1][j], dp[i][j+1]);
        }
    }
    int i=n, j=1, ans=0;
    while(i>0&&j<=n) {
        if(s[i]==s[j])
            ans++, i--, ++j;
        else {
            if(dp[i][j]==dp[i-1][j])
                i--;
            else
                ++j;
        }
    }
    cout << ans << '\n';
	
	return 0;
}
