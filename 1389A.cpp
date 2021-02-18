#include <bits/stdc++.h>
#define nl '\n'

using namespace std;

typedef long long ll;

#define pi acos(-1)
#define all(x) (x).begin(), (x).end()

ll gcd(ll x, ll y){
    if(x == 0)
        return y;
    return gcd(y, x % y);
}
ll lcm(ll x, ll y){
    return (x * y) / gcd(x, y);
}
int main(){
#ifdef PTK
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        if(r - l == 1){
            if(lcm(l, r) < l || lcm(l, r) > r)
                cout << -1 << ' ' << -1 << nl;
            else
                cout << l << ' ' << r << nl;
        }
        else{
            int x = l;
            int t = r / l;
            if(x == x * t)
                cout << -1 << ' ' << -1 << nl;
            else
                cout << x << ' ' << x * t << nl;
        }
    }

    return 0;
}
