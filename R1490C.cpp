#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()

unordered_set<ll> s;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    for(ll i = 1; i * i * i <= (ll)(1e12); ++i){
        s.insert(i * i * i);
    }

    int t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        bool ok = 0;

        for(ll i = 1; i * i * i <= x; ++i){
            if(s.count(x - i * i *i)){
                cout << "YES\n";
                ok = 1;
                break;
            }
        }
        if(!ok)
            cout << "NO\n";
    }
    return 0;
}

