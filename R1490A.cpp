#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ' ' << x

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n, ne, la;
        int cnt = 0;
        cin >> n >> la;
        for(int i = 0; i < n - 1; ++i){
			cin >> ne;
			int mi = min(ne, la);
			int ma = max(ne, la);
			while(mi * 2 < ma){
				mi *= 2;
				cnt++;
			}	
			la = ne;
		}
		cout << cnt << nl;
    }

    return 0;
}

