#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin >> n;
    for (ll d = 1; d * d * d <= n; d++) {
        if ((n - d * d * d) % (3 * d) != 0) continue;
        ll r = (n - d * d * d) / (3 * d);
        ll pan = d * d + 4 * r;
        ll sq = (ll) sqrt(pan);
        if (sq * sq != pan) continue;
        if ((-d + sq) % 2 != 0) continue;
        ll y = (-d + sq) / 2;
        if (y <= 0) continue;
        ll x = y + d;
        cout << x << " " << y << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
    //Jackis666
}
