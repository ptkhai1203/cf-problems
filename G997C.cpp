#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll dp[1011][8];

    const int inf = 1e7 + 11;

    for(int i = 0; i < 1e3 + 11; ++i){
        for(int j = 0; j < 8; ++j){
            dp[i][j] = inf;
        }
    }

    int n;
    cin >> n;
    
    dp[0][0] = 0;

    for(int i = 0; i < n; ++i){
        int cost;
        string vtm;
        cin >> cost >> vtm;
        int vtm_mark = 0;
        for(int p = 0; p < 3; ++p){
            char v = 'C' - p;
            bool ok = 0;
            for(char s : vtm){
                if(s == v)
                    ok = 1;
            }
            if(ok)
                vtm_mark += (1 << p);
        }
        for(int j = 0; j < 8; ++j){
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            dp[i + 1][j | vtm_mark] = min(dp[i + 1][j | vtm_mark], dp[i][j] + cost);
        }
    }

    if(dp[n][7] == inf)
        cout << -1;
    else
        cout << dp[n][7];

    return 0;
}

