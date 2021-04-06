#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);}
const int maxR = 1e5;

struct robot{
	int x, y;
	bool l, r, u, d;
};

int main(){
	send help
	int t;
	cin >> t;
	while(t--){
		int n;
		int minx, maxx, miny, maxy;
		minx = miny = -maxR;
		maxx = maxy = maxR;
		cin >> n;
		vector<robot> a(n);
		for(auto&p : a)
			cin >> p.x >> p.y >> p.l >> p.d >> p.r >> p.u;
		for(auto p : a){
			if(!p.l)
				minx = max(p.x, minx);
			if(!p.r)
				maxx = min(p.x, maxx);
			if(!p.u)
				miny = max(p.y, miny);
			if(!p.d)
				maxy = min(p.y, maxy);
		}
		if(minx <= maxx && miny <= maxy)
			cout << "1" << ' ' << minx << ' ' << miny << '\n';
		else
			cout << "0\n";
	}
	return 0;
}
