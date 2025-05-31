#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
signed main(){
    Jackis666;
    int n;
    cin>>n;
    vector<int> a(n);
    int cnt=0;
    for(int i=0;i<n;i++){cin>>a[i];cnt+=a[i];}
    int ans=0;;
    for(int i=0;i<n;i++){
            cnt-=a[i];
            ans+=a[i]*cnt;

    }
    cout<<ans;
}
