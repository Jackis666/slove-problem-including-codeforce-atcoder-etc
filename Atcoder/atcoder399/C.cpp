#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&parent,int x){
    if(parent[x]!=x)
        parent[x]=find(parent,parent[x]);
    return parent[x];
}
bool unite(vector<int>&parent,vector<int>&rank,int x,int y){
    int rootx=find(parent,x);
    int rooty=find(parent,y);
    if(rootx==rooty)return false;
    if(rank[rootx]>rank[rooty]){
        parent[rooty]=rootx;
    }else if(rank[rootx]<rank[rooty]){
        parent[rootx]=rooty;
    }else{
        parent[rooty]=rootx;
        rank[rootx]++;
    }
    return true;
}
int main(){
    //Jackis666
    int n,m;
    cin>>n>>m;
    vector<int>parent(n),rank(n,1);
    for(int i=0;i<n;i++)parent[i]=i;
    int ans=0;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        u--;v--;
        if(!unite(parent,rank,u,v)){
            ans++;
        }
    }
    cout<<ans<<endl;

}
