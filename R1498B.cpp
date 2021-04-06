#include <bits/stdc++.h>

using namespace std;
string to_string(string s){
    return '"' + s + '"';
}
string to_string(const char *s){
    return to_string((string)s);
}
string to_string(bool b){
    return (b ? "true" : "false");
}
template <typename A, typename B>
string to_string(pair<A, B> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
template<typename A>
string to_string(A v){
    bool first = true;
    string res = "{";
    for(const auto &x : v){
        if(!first){
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}
void debug_out(){cerr << endl;}
template<typename Head, typename... Tail>
void debug_out(Head H, Tail... T){
    cerr << " " << to_string(H);
    debug_out(T...);
}
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);}
#define debug(x...) cerr << "[" << #x << "]: ", debug_out(x);
typedef long long ll;

int main(){
	send help
	int t;
	cin >> t;
	while(t--){
		int n ;
		ll w;
		int h = 1;
		cin >> n >> w;
		multiset<int> set;
		for(int i = 0; i < n; ++i){
			int x;
			cin >> x;
			set.insert(x);
		}
		debug(set);
		int tW = w;
		while(set.size() > 0){
			auto k = set.upper_bound(tW);
			if(k != set.begin()){
				k--;
				tW -= *k;
				set.erase(k);
			}
			else{
				tW = w;
				h++;
			}
		}
		cout << h << '\n';
	}
	
	return 0;
}
