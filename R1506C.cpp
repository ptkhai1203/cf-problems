#include <bits/stdc++.h>

using namespace std;
#define send {ios_base::sync_with_stdio(0);}
#define help {cin.tie(0);}

int main(){
	send help
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		int best = 0;
		int lenA = a.length();
		int lenB = b.length();
		for(int i = 0; i < lenA; ++i){
			for(int j = 0; j < lenB; ++j){
				if(a[i] == b[j]){
					int k = 0;
					while(a[i + k] == b[j + k] && i + k < lenA && j + k < lenB) k++;
					best = max(best, k);
				}
			}
		}
		
		cout << lenA - best + lenB - best << '\n';
	}
			
	return 0;
}
