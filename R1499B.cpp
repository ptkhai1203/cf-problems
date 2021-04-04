#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t;
    cin >> t;
    string s;

    while(t--){
        cin >> s;
        int p = s.find("11");
        int q = s.rfind("00");
        
        cout << (p != -1 && q != -1 && p < q ? "NO\n" : "YES\n");
    }

    return 0;
}

