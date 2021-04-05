#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()
#define debug(x) cerr << #x << ' ' << x

int main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    while(t--){
		int n;
		cin >> n;
		int cnt[3] = {0, 0, 0};
		for(int i = 0; i < n; ++i){
			int x;
			cin >> x;
			cnt[x % 3]++;
		}
		int res = 0;
		int i = 0;
		while(cnt[0] != n / 3 || cnt[1] != n / 3 || cnt[2] != n / 3){
			if(cnt[i] > n / 3){
				res += cnt[i] - n / 3;
				cnt[(i + 1) % 3] += cnt[i] - n / 3;
				cnt[i] = n / 3;
			}
			i++;
			i%=3;
		}
		cout << res << nl;
	}

    return 0;
}

