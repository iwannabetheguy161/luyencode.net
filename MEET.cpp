#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef _iwannabetheguy
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {ris << "(" << d.first << ", " << d.second << ")";}
sim dor(rge<c> d) {*this << "[";for (auto it = d.b; it != d.e; ++it) *this << ", " + 2 * (it == d.b) << *it;ris << "]";}
#else
sim dor(const c&) { ris; }
#endif
};
#define var(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n; char c; cin >> n >> c;
    string a[n];
    for(int i=0; i<n; ++i) cin >> a[i];
    for(string s : a) {
        bool bad=0;
        for(int i=0; i<s.size()&&!bad; ++i) {
            if(s[i]==c) {
                bad=1;
                continue;
            }
        }
        if(!bad)
            cout << s << '\n';
    }
	
	return 0;
}
