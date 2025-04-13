#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1e9;

signed main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + k, 0);


    for (int i = 0; i < k and i <= n; i++) {
        a[i] = 1;
    }


    int presum = accumulate(a.begin(), a.begin() + k, 0LL);

    for (int i = k; i <= n; i++) {
        a[i] = ( presum + MOD ) % MOD;
        presum += a[i]+MOD - a[i - k];
    }

    cout << a[n]%MOD << endl;
    return 0;
}
