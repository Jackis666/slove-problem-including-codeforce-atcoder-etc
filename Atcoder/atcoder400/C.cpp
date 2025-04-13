#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int ans=0;
    for(int b=1;b*b<=n;b+=2){
        if(b*b%2!=0){
        int maxa=63-__builtin_clzll(n/(b*b));
        ans+=maxa;
        }
    }
    cout<<ans;


}
