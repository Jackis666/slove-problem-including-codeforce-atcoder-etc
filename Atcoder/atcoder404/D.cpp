#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
signed main(){
    Jackis666;
    int n,m;
    cin>>n>>m;
    vector<int> money(n);
    for(int i=0;i<n;i++) cin>>money[i];
    vector<vector<int>> ani(n);
    for(int i=0;i<m;i++){
        int in;
        cin>>in;
        for(int j=0;j<in;j++){
            int in2;
            cin>>in2;
            in2--;
            ani[in2].pb(i);
        }
    }
    int ans=LLONG_MAX;
    for(int i=0;i<pow(3,n);i++){
        int t=i;
        vector<int> visit(n);
        for(int i=0;i<n;i++){
            visit[i]=t%3;
            t/=3;
        }
        int now=0;
        vector<int> see(m,0);
        for(int j=0;j<n;j++){
            if(visit[j]==0) continue;
            now+=visit[j]*money[j];
            for(int s:ani[j]){
                see[s]+=visit[j];
            }
        }
        bool ok=true;
        for(int k=0;k<m;k++){
            if(see[k]<2){
                ok=false;
                break;
            }
        }
        if(ok) ans=min(ans,now);
    }
    cout<<ans;



}
