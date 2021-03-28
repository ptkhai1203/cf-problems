#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()
const int mxn = 2 * 1e5 + 11;
int dp[mxn];
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
 
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
 
    vector<int> mark(27);
    for(int i = 0; i < k; ++i){
        char c;
        cin >> c;
        mark[c - 'a'] = 1;
    }
    dp[0] = mark[s[0] - 'a'] ? 1 : 0;
    for(int i = 1; i < s.length(); ++i){
        dp[i] = (mark[s[i] - 'a'] ? dp[i - 1] + mark[s[i] - 'a'] : 0);
    }
//
//    for(int i = 0; i < n; ++i)
//        cout << dp[i] << ' ' ;
 
    ll res = 0;
    for(int i = 0; i < n; ++i){
        res += dp[i];
    }
 
    cout << res;
 
    return 0;
}
