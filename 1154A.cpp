#include <bits/stdc++.h>
#define nl '\n'
using namespace std;

int main(){
#ifdef PTK
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> x(4);
    for(int i = 0; i < 4; ++i)
        cin >> x[i];

    sort(x.begin(), x.end());

    int b = x[0] + x[2] - x[3];
    int a = x[0] - b;
    int c = x[2] - b;

    cout << a << ' ' << b << ' ' << c;    

    return 0;
}

