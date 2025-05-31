#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
int ans=0;
vector<vector<int>> mp;
vector<vector<bool>> visited;
int h,w;
void ff(int i,int j,int now){
    if(i==h){
        ans=max(ans,now);
        return;
    }
    if(j==w){
        ff(i+1,0,now);//传︽场xor传加
        return;
    }
    if(visited[i][j]){
        ff(i,j+1,now);//传犯传加
        return;
    }
    ff(i,j+1,now^mp[i][j]);//常⊿Τ
    if(j+1<w and !visited[i][j+1]){
        visited[i][j]=true;
        visited[i][j+1]=true;
        ff(i,j+2,now);
        visited[i][j]=false;
        visited[i][j+1]=false;
    }
    if(i+1<h and !visited[i+1][j]){
        visited[i+1][j]=true;
        visited[i][j]=true;
        ff(i,j+1,now);
        visited[i+1][j]=false;
        visited[i][j]=false;
    }
}
signed main(){
    Jackis666;
    cin>>h>>w;
    mp.resize(h,vector<int>(w));
    visited.resize(h,vector<bool>(w,0));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>mp[i][j];
        }
    }
    ff(0,0,0);
    cout<<ans;

}
