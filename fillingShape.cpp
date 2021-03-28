#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll dp[61];
    int n;
    cin >> n;

    if(n & 1){
        cout << 0;
        return 0;
    }

    dp[0] = dp[1] = 0;
    dp[2] = 2;

    for(int i = 3; i <= n; ++i){
        if(i % 2 == 0)
            dp[i] = dp[i - 1] * 2 * 1LL;
        else
            dp[i] = dp[i - 1];
    }
    cout << dp[n];

    return 0;
}

