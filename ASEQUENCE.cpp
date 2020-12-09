// this solutions was submitted and accepted on ASEQUENCE problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n; cin >> n;
    int64_t a[n], re=0;
    bool ok=0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        if(i) {
            if(i==1) {
                re=a[i]-a[i-1];
                ok=1;
            }
            else if(ok)
                if(a[i]-a[i-1]!=re)
                    ok=0;
        }
    }
    cout << (ok?"YES":"NO") << '\n';

    return 0;
}
