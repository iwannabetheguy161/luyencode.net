// this solutions was submitted and accepted on MARBLES problem
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n; cin >> n;
    for(int i=1; i<=n; ++i) {
        if(i*(i+1)/2==n) {
            puts("Yes.");
            return 0;
        }
    }
    puts("No.");

    return 0;
}
