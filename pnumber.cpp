#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);};

const int mx = 1e6 + 11;

vector<bool> isPrime(mx, 1);

void sieve(){
    isPrime[0] = isPrime[1] = 0;
    for(int i = 2; i * i <= mx; ++i){
        if(isPrime[i])
            for(int j = i * i; j <= mx; j += i){
                isPrime[j] = 0;
            }
    }
}

int main(){

    int l, r;
    sieve();
    while(cin >> l >> r){
        for(int i = l; i <= r; ++i){
            if(isPrime[i])
                cout << i << '\n';
        }
    }

    return 0;
}