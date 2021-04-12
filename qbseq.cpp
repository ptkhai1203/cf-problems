#include <bits/stdc++.h>

using namespace std;
#define nl '\n';
#define send {ios_base::sync_with_stdio(0);}

const int mxn = 1e3 + 11;
int a[mxn];
int n;
int k;

int main(){
    send
    cin >> n >> k;
    for(int i = 1; i <= n; ++i){
       cin >> a[i];
       a[i] %= k;
    }
    vector<vector<int>> dp(n + 1, vector<int> (k + 1, INT_MIN));
    dp[0][0] = 0;
    for(int i = 1; i <= n; ++i){
       for(int j = 0; j < k; ++j)
           dp[i][j] = max(dp[i - 1][j], dp[i - 1][(j - a[i] + k * k) % k] + 1);
    }
    cout << dp[n][0] << nl;
    return 0;
}
