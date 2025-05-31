#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
vector<vector<int>> graph;
vector<bool> visited;
void dfs(int s){
    visited[s]=true;
    for(int e:graph[s]){
        if(!visited[e]){
            dfs(e);
        }
    }
}
signed main(){
    Jackis666;
    int n,m;
    cin>>n>>m;

    graph.resize(n + 1);
    visited.resize(n + 1, false);
    vector<int> cc(n+1,0);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        cc[a]++;
        cc[b]++;
    }
    if(n!=m){
        cout<<"No";
        return 0;
    }
    for(int i=1;i<=n;i++){
        if(cc[i]!=2){
            cout<<"No";
            return 0;
        }
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";




}
