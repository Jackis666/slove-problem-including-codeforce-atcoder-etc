#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0);cin.tie(0)
#define pb(a) push_back(a)

signed main(){
    Jackis666;
    int n;
    cin>>n;
    vector<int> c(n);
    vector<int> a(n,0);
    for(int i=1;i<n;i++) cin>>c[i];
    for(int i=1;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=n-1;i>=1;i--){
        if(a[i]==0) continue;
        int m=a[i];
        a[i]=0;
        ans++;
        int l=i-c[i];
        while(m>0){
            for(int j=l;j<i and m>0;j++){
                a[j]++;
                m--;
            }
        }
    }
    cout<<ans;
}
