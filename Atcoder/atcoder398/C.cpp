#include <bits/stdc++.h>


using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> u, app;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(app.count(a[i])){
            u.erase(a[i]);
        }
        else{
            u.insert(a[i]);
        }
        app.insert(a[i]);
    }

    if (u.empty()) {
        cout << -1 << endl;
        return 0;
    }

    int maxx = *u.rbegin();

    for (int i = 0; i < n; i++) {
        if (a[i] == maxx) {
            cout << i + 1 << endl;

        }
    }


}
