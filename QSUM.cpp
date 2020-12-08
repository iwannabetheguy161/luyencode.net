// this solutions was submitted and accepted on QSUM problem
#include <bits/stdc++.h>

const int mxN=1e5;
int n, q;

struct ft {
    int64_t a[mxN+1];
    ft() {
        memset(a, 0, sizeof(a));
    }
    void upd(int i, int64_t x) {
        for(; i<=n; i+=i&-i)
            a[i]+=x;
    }
    int64_t qry(int i) {
        int64_t res=0;
        for(; i; i-=i&-i) {
            res+=a[i];
        }
        return res;
    }
} f;

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    cin >> n >> q;
    for(int i=1; i<=n; ++i) {
        int64_t x; cin >> x;
        f.upd(i, x);
    }
    while(q--) {
        int qt; cin >> qt;
        if(qt==1) {
            int u; int64_t v; cin >> u >> v;
            f.upd(u, v);
        }
        else if(qt==2) {
            int u, v; cin >> u >> v;
            int64_t ans=f.qry(v)-f.qry(u-1);
            cout << ans << " ";
        }
    }
    cout << '\n';

    return 0;
}
