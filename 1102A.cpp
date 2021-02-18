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
        
    int n;
    cin >> n;
    long long mul = n * (n + 1) / 2;
    if(mul & 1)
        cout << 1;
    else
        cout << 0;    

    return 0;
}

