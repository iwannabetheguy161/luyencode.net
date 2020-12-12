#include <bits/stdc++.h>
using namespace std;

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
