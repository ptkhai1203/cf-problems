#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);};
int n;
int dp[30111];
int a[30111];
int b[30111];

int main(){

    while(cin >> n){
        for(int i = 1; i <= n; ++i){
            cin >> a[i];
        }
        int last = 0;
        for(int i = 1; i <= n; ++i){
            dp[i] = lower_bound(b + 1, b + last + 1, a[i]) - b;
            last = max(last, dp[i]);
            b[dp[i]] = a[i];
        }
        cout << last << '\n';
    }

    return 0;
}