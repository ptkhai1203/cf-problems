#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
typedef long long ll;
const int mxn = 1e5 + 11;
int a[mxn];
ll f[mxn];
int n, s;

ll get(int k){
    for(int i = 0; i < n; ++i)
        f[i] = a[i] + (i + 1) * (ll) k;
    sort(f, f + n);
    ll ans = 0;
    for(int i = 0; i < k; ++i)
       ans += f[i];

    return ans;
}

void solve(){
    int p = 0;
    for(int i = n; i >= 1; i /= 2)
        while(p + i < n && get(p + i) <= s)
            p += i;
    cout << p << ' ' << get(p);
}

int main(){
#ifdef PTK
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> s;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    solve();
    return 0;
}

