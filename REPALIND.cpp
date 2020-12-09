// this solutions was submitted and accepted on REPALIND problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    auto chk=[&](string s) {
        for(int i=0; i<s.size()/2; ++i) {
            if(s[i]!=s[s.size()-i-1])
                return false;
        }
        return true;
    };

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int64_t k; cin >> k;
        if(chk(s))
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
