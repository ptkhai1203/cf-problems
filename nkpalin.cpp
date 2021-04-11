#include <bits/stdc++.h>

using namespace std;
#define nl '\n';
#define send {ios_base::sync_with_stdio(0);}
string s;
const int mxn = 2011;
int dp[mxn][mxn];

int main(){

    while(cin >> s){
        int ls = s.size();
        s = " " + s + " ";
        string fs = s;
        reverse(s.begin(), s.end());
    
        for(int i = 1; i <= ls; ++i){
            for(int j = 1; j <= ls; ++j){
                if(s[i] == fs[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            } 
        }
        //cout << dp[ls][ls] << nl;
        int i = ls, j = ls;
        while(i > 0 && j > 0){
            if(s[i] == fs[j]){
                cout << s[i];
                i--;
                j--;
            } else if(dp[i][j] == dp[i - 1][j]){
                i--;
            } else if(dp[i][j] == dp[i][j - 1])
                j--;
        }
    }

    return 0;
}
