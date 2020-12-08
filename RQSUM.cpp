// this solutions was submitted and accepted on RQSUM problem
#include <bits/stdc++.h>

const int mxN=1e5;
int n, q;

struct ft {
    int64_t a[mxN+1];
    ft() {
        memset(a, 0LL, sizeof(a));
    }
    void upd(int64_t i, int64_t x) {
        for(; i<=n; i+=i&-i) {
            a[i]+=x;
        }
    }
    int64_t qry(int64_t i) {
        int64_t res=0;
        for(; i; i-=i&-i) {
            res+=a[i];
        }
        return res;
    }
} f[2];

void app(int64_t l, int64_t r, int64_t x) {
    f[0].upd(l, x);
    f[0].upd(r+1, -x);
    f[1].upd(l, x*(l-1));
    f[1].upd(r+1, -x*r);
}

int main() {
    using namespace std;
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    cin >> n >> q;
    for(int i=1; i<=n; ++i) {
        int64_t x; cin >> x;
        app(i, i, x);
    }
    while(q--) {
        int qt; cin >> qt;
        if(qt==1) {
            int64_t u, v, x; cin >> u >> v >> x;
            app(u, v, x);
        }
        else if(qt==2) {
            int64_t u, v; cin >> u >> v;
            int64_t ans=(v*f[0].qry(v)-f[1].qry(v))-((u-1)*f[0].qry(u-1)-f[1].qry(u-1));
            cout << ans << '\n';
        }
    }

    return 0;
}
