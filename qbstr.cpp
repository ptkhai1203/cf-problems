#include <bits/stdc++.h>

using namespace std;
#define nl '\n';
#define send {ios_base::sync_with_stdio(0);}
string s;
string fs;
const int mxn = 2011;
int dp[mxn][mxn];

int main(){

    while(cin >> s >> fs){
        int ls = s.length();
        int lfs = fs.length(); 
        s = " " + s + " ";
        fs = " " + fs + " ";
        for(int i = 1; i <= ls; ++i){
            for(int j = 1; j <= lfs; ++j){
                if(s[i] == fs[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            } 
        }
        cout << dp[ls][lfs] << nl;
    }

    return 0;
}
