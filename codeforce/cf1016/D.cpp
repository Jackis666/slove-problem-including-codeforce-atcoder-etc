#include <bits/stdc++.h>
using namespace std;
#define int long long
//1 4 13 16
//3 2 15 14
//9 12 5 8
//11 10 7 6
//���W0�k�W3���U2�k�U1
int findnum(int x, int y, int n, int nowval) {
    if (n == 2) {
        if (x == 1 && y == 1) return nowval + 0; // ���W
        if (x == 2 && y == 2) return nowval + 1; // �k�U
        if (x == 2 && y == 1) return nowval + 2; // ���U
        if (x == 1 && y == 2) return nowval + 3; // �k�W
    }

    int mid = n / 2;
    int sizeptwo = mid * mid;

    if (x <= mid && y <= mid) { // ���W
        return findnum(x, y, mid, nowval + 0 * sizeptwo);
    } else if (x > mid && y > mid) { // �k�U
        return findnum(x - mid, y - mid, mid, nowval + 1 * sizeptwo);
    } else if (x > mid && y <= mid) { // ���U
        return findnum(x - mid, y, mid, nowval + 2 * sizeptwo);
    } else { // �k�W
        return findnum(x, y - mid, mid, nowval + 3 * sizeptwo);
    }
}
pair<int, int> findway(int d, int n, int nowval, int x, int y) {
    if (n == 2) {
        if (d == nowval + 0) return {x, y};         // ���W
        if (d == nowval + 1) return {x + 1, y + 1}; // �k�U
        if (d == nowval + 2) return {x + 1, y};     // ���U
        if (d == nowval + 3) return {x, y + 1};     // �k�W
    }

    int mid = n / 2;
    int sizeptwo = mid * mid;

    if (d < nowval + sizeptwo) {
        return findway(d, mid, nowval + 0 * sizeptwo, x, y);
    } else if (d < nowval + 2 * sizeptwo) {
        return findway(d, mid, nowval + 1 * sizeptwo, x + mid, y + mid);
    } else if (d < nowval + 3 * sizeptwo) {
        return findway(d, mid, nowval + 2 * sizeptwo, x + mid, y);
    } else {
        return findway(d, mid, nowval + 3 * sizeptwo, x, y + mid);
    }
}





signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int s = (1 << n); // 2^n
        while (k--) {
            string in;
            cin >> in;
            if (in == "->") {
                int x, y;
                cin >> x >> y;
                cout << findnum(x, y, s, 1) << "\n";
            } else {
                int nn;
                cin >> nn;
                auto ans = findway(nn, s, 1, 1, 1);
                cout << ans.first << " " << ans.second << "\n";
            }
        }
    }
}
