#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

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
        int x, y;
        cin >> x >> y;
        if(x % y == 0)
            cout << 0 << nl;
        else{
            int div = x / y;
            cout << (div + 1) * y - x << nl;
        }
    }

    return 0;
}

