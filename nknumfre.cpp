#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);};

int gcd(int a, int b){
    if(a == 0)
        return b;
    return gcd(b % a, a);
}
int rev(int x){
    int res = 0;
    while(x != 0){
        res = res * 10 + (x % 10);
        x /= 10;
    }
    return res;
}
int main(){

    int l, r;
    while(cin >> l >> r){
        int res = 0;
        for(int i = l; i <= r; ++i)
            if(gcd(i, rev(i)) == 1)
                res++;
        cout << res << '\n';
    }

    return 0;
}