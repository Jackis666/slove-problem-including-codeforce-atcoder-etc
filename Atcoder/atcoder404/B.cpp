#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
vector<string> rotate(const vector<string>& grid) {
    int N = grid.size();
    vector<string> rotated(N, string(N, '.'));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            rotated[j][N - 1 - i] = grid[i][j];
    return rotated;
}
signed main(){
    Jackis666;
    int n;
    cin>>n;
    vector<string> a(n);
    vector<string> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int ans=INT_MAX;
    int m=0;
    while(m<=3){
        int now=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!=b[i][j]){
                    now++;
                }
            }
        }
        ans=min(ans,now+m);
        m++;
        a=rotate(a);
    }
    cout<<ans;


}
