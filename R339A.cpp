#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    string s;
    cin >> s;

    sort(all(s));

    for(int i = s.length() / 2; i < s.length(); ++i){
        if(i == s.length() - 1)
            cout << s[i];
        else
            cout << s[i] << '+';
    }

    return 0;
}

