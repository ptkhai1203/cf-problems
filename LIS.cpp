#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);};

const int mxn = 1e3 + 11;

int main(){
    send help
    int n;
    int dp[mxn];
    while(cin >> n){
        vector<int> a(n);
        for(int& x : a)
            cin >> x;
        memset(dp, 0, mxn);
        dp[0] = 1;

        for(int i = 1; i < n; ++i){
            dp[i] = 1;
            for(int j = 0; j < i; ++j){
                if(a[i] > a[j])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
        }

        cout << *max_element(dp, dp + n);
    }

    return 0;
}