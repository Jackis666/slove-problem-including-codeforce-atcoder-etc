#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        int ans=0;
        int now=INT_MAX,nowl=0;
        for(int i=0;i<n;i++){
            nowl++;
            now=min(now,a[i]);
            if(nowl*now>=x){
                ans++;
                now=INT_MAX;
                nowl=0;
            }
        }
        cout<<ans<<endl;
    }
}
