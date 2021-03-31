#include <iostream>
using namespace std;
 
int main() {
 
	string s;
	
	cin >> s;
	
	int cnt = 1;
	
	for(int i = 1; i < s.length(); ++i){
		if(s[i] == s[i - 1])
			cnt++;
		else
			cnt = 1;
		//cout << cnt << endl;
		if(cnt >= 7){
			cout << "YES";
			return 0;
		}
	}
 
	cout << "NO";
 
	return 0;
}
