#include <bits/stdc++.h>
using namespace std;

#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
signed main(){
    Jackis666;
    int x,y;
    cin>>x>>y;
    double ans=0;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            if(i+j>=x or abs(i-j)>=y){
                ans++;
            }
        }
    }
    cout<<fixed<<setprecision(20)<<double(ans/36.0);

}
