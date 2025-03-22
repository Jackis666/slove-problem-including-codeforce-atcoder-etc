#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> l(n+1,0),r(n+1,0);
    set<int> seen;
    for(int i=0;i<n;i++){
        seen.insert(a[i]);
        l[i]=seen.size();
    }
    seen.clear();
    for(int i=n-1;i>=0;i--){
        seen.insert(a[i]);
        r[i]=seen.size();
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,l[i]+r[i+1]);
    }
    cout<<ans;
}
