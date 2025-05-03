#include <bits/stdc++.h>
using namespace std;
//Jackis666

int main(){
    int n,d;
    cin>>n>>d;
    int maxx=1000001;
    vector<int> c(maxx,0);
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        c[in]++;
    }
    int ans=0;
    if(d==0){
        for(int i=0;i<maxx;i++){
            if(c[i]>1){
                ans+=c[i]-1;
            }
        }
    }
    else {
        for(int i=0;i<d;i++){
            vector<int> a;
            for(int j=0;i+j*d<=maxx;j++){
                a.push_back(c[i+j*d]);
            }
            vector<vector<int>> dp(a.size()+1, vector<int>(2,0));
            int sum=0;
            for(int j=0;j<a.size();j++){
                sum+=a[j];
                dp[j+1][1]=max(dp[j][0],dp[j][1]);
                dp[j+1][0]=dp[j][1]+a[j];
            }
            ans+=sum-max(dp[a.size()][1],dp[a.size()][0]);
        }
    }
    cout<<ans;


}
