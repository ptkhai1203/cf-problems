#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);};

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
#ifdef LOCAL
#define debug(x...) cerr << "[" << #x << "]: ", debug_out(x);
#else
#define debug(x...) 17
#endif

void ope1(vector<int>& a, int n){
    for(int i = 0; i < 2 * n - 1; i+=2){
        swap(a[i], a[i + 1]);
    }
}
void ope2(vector<int>& a, int n){
    for(int i = 0; i < n; ++i){
        swap(a[i], a[i + n]);
    }
}
bool cmp(vector<int> a, vector<int> b){
	for(int i = 0; i < a.size(); ++i)
		if(a[i] != b[i])
			return 0;
	return 1;
}
int main(){

    send help
    int n;
    cin >> n;
    int m = 2 * n;
    vector<int> a(m), make(m);
    for(int i = 0; i < m; ++i){
		cin >> a[i];
		a[i]--;
		make[i] = i;
	}
	if(cmp(a, make)){
		cout << 0;
		return 0;
	}
	int res = INT_MAX;
	int move = 0;
	for(int i = 0; i < m; ++i){
		if(i & 1)
			ope1(a, n);
		else
			ope2(a, n);
		if(cmp(a, make)){
			move = i + 1;
			res = min(res, move);
		}
	}
	for(int i = 0; i < m; ++i)
		make[i] = i;
	for(int i = 0; i < m; ++i){
		if(i & 1)
			ope2(a, n);
		else
			ope1(a, n);
		if(cmp(a, make)){
			move = i + 1;
			res = min(res, move);
		}
	}
	if(res <= 2 * n)
		cout << res ;
	else 
		cout << -1;
    return 0;
}
