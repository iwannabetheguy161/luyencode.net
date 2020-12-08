// this solutions was submitted and accepted on MAGPERM problem
#include <bits/stdc++.h>

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    int n, k; cin >> n >> k;
    int a[n];
    memset(a, -1, sizeof(a));
    for(int i=0; i<n; ++i) {
        if(i-k>=0&&a[i-k]==-1)
            a[i-k]=i;
        else if(i+k<n&&a[i+k]==-1)
            a[i+k]=i;
        else {
            cout << "-1\n";
            return 0;
        }
    }
    for(int c : a) {
        cout << c+1 << " ";
    }
    cout << '\n';

    return 0;
}
