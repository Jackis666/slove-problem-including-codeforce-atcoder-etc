#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
const char arrow[4] = {'^', 'v', '<', '>'};
signed main(){
    Jackis666;
    int h,w;
    cin>>h>>w;
    vector<string> m(h);
    for(int i=0;i<h;i++) cin>>m[i];;
    queue<pair<int,int>> q;
    vector<vector<int>> visit(h,vector<int>(w,-1));
    vector<vector<int>> form(h,vector<int>(w,-1));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(m[i][j]=='E'){
                visit[i][j]=0;
                q.emplace(i,j);
            }
        }
    }
    while(!q.empty()){
        auto[x,y]=q.front(); q.pop();
        for(int i=0;i<4;i++){
            int nx=x+dx[i];int ny=y+dy[i];
            if(nx<0 or nx>=h or ny<0 or ny>=w) continue;
            if(visit[nx][ny]!=-1 or m[nx][ny]=='#') continue;
            q.emplace(nx,ny);
            visit[nx][ny]=visit[x][y]+1;
            form[nx][ny]=i;
        }
    }
    vector<string> mm=m;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(m[i][j]=='.'){
                int aaa=form[i][j]^1;
                mm[i][j]=arrow[aaa];
            }
        }
    }
    for(int i=0;i<h;i++) cout<<mm[i]<<endl;

}
