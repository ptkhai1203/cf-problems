#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define pi acos(-1)
#define nl '\n'
#define all(x) (x).begin(), (x).end()

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);

    vector<int> a(3);

    for(int&x : a)
        cin >> x;

    sort(all(a));

    cout << abs(a[1] - a[0]) + abs(a[1] - a[2]);

    return 0;
}

