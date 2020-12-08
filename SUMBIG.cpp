// this solutions was submitted and accepted on SUMBIG problem
#include <bits/stdc++.h>
using namespace std;

string add(string a, string b) {
    string res;
    while(a.size()<b.size()) a='0'+a;
    while(a.size()>b.size()) b='0'+b;
    int re=0;
    for(int i=a.size()-1; i>=0; i--) {
        int c=(a[i]-'0')+(b[i]-'0')+re;
        res=(char)((c%10)+'0')+res;
        re=c/10;
    }
    if(re) res='1'+res;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
#ifdef _iwannabetheguy
    freopen("in", "r", stdin);
#endif

    string a, b; cin >> a >> b;
    cout << add(a, b) << '\n';

    return 0;
}
