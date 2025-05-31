#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
signed main(){
    Jackis666;
    int n,m;
    cin>>n>>m;
    int a[100];
    int cnt[101]={0};

    for(int i=0;i<n;i++){cin>>a[i];cnt[a[i]]++;}
    for(int i=1;i<=m;i++){
        if(cnt[i]==0){
            cout<<0;
            return 0;
        }
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
        cnt[a[i]]--;
        ans++;
        if(cnt[a[i]]==0){
            break;
        }
    }
    cout<<ans;
}
