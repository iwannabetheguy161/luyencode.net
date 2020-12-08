// this solutions was submitted and accepted on GUNDAM problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n, m; cin >> n >> m;
    string a[n];
    for(int i=0; i<n; ++i) {
        cin >> a[i];
    }
    int ans=0;
    for(int i=0; i+1<n; ++i) {
        for(int j=0; j+1<m; ++j) {
            if(a[i][j]==a[i][j+1]&&a[i][j]=='.')
                ++ans;
            if(a[i][j]==a[i+1][j]&&a[i][j]=='.')
                ++ans;
        }
    }
    cout << ans << '\n';

    return 0;
}
