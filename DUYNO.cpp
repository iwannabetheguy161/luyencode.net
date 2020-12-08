// this solutions was submitted and accepted on DUYNO problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    string s;
    while(cin >> s) {
        if(s[0]==s[s.size()-1])
            puts("YES");
        else
            puts("NO");
    }

    return 0;
}
