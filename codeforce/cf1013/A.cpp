#include <bits/stdc++.h>
using namespace std;
//#define int long long
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt[10]={0};
        int now=0;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            cnt[in]++;
            if(cnt[0]>=3 and cnt[1]>=1 and cnt[2]>=2 and cnt[3]>=1 and cnt[5]>=1 and now==0){
                now=i+1;

            }
        }
        cout<<now<<endl;
    }
}
