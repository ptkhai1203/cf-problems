#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);};

int main(){

    string s = "april fool";
    int n;
    cin >> n;
    cout << s[(n - 1) % s.size()];
    return 0;
}