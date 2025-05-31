#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
vector<pair<int, int>> f;
vector<pair<int, int>> edge;
struct qqq{
    int a,b;

};
bool inside(int a,int b,int x){
    if(a<b){
        return a<x and x<b;
    }
    else
        return a<x or x<b;

}
bool across(int a,int b,int c,int d){
    return inside(a,b,c)!= inside(a,b,d);

}
signed main(){
    Jackis666;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        if(a>b)
        swap(a,b);
        edge.push_back({a,b});
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        if(a>b)
        swap(a,b);
        f.push_back({a,b});
    }
    for(auto[c,d]:f) {
        int cnt=0;
        for(auto [a,b]:edge) {
            if(across(a,b,c,d))
                cnt++;
        }
        cout<<cnt<<'\n';
    }
    //«OÃÒTLE

}
