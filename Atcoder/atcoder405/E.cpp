#include <bits/stdc++.h>
using namespace std;

const int MAX = 400005;

struct Segment {
    int a, b;
};

int N, M, Q;
vector<Segment> segs;
vector<Segment> queries;
vector<int> bit(MAX);
vector<int> results;

void update(int x, int delta) {
    while (x < MAX) {
        bit[x] += delta;
        x += x & -x;
    }
}

int query(int x) {
    int sum = 0;
    while (x > 0) {
        sum += bit[x];
        x -= x & -x;
    }
    return sum;
}

int query_range(int l, int r) {
    return query(r) - query(l - 1);
}

bool is_inside(int a, int b, int x) {
    // returns true if x is inside arc (a, b) clockwise
    if (a < b)
        return a < x && x < b;
    else
        return a < x || x < b;
}

bool is_cross(int a, int b, int c, int d) {
    return is_inside(a, b, c) != is_inside(a, b, d);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int a, b; cin >> a >> b;
        if (a > b) swap(a, b);
        segs.push_back({a, b});
    }

    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int c, d; cin >> c >> d;
        if (c > d) swap(c, d);
        queries.push_back({c, d});
    }

    for (auto [c, d] : queries) {
        int cnt = 0;
        for (auto [a, b] : segs) {
            if (is_cross(a, b, c, d)) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
