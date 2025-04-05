#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        vector<int> p(n+1);
        p[0]=0;
        for(int i=1;i<n;i++){
            p[i]=p[i-1]+a[i-1];
        }

        if(k*sum<x){
            cout<<"0"<<endl;
            continue;
        }
        int ans=0;
        int qq=k*sum-x;//³Ñ¤Uªº
        for(int i=0;i<k;i++){
            int ff=qq-i*sum;
            if(ff<0){
                break;
            }
            int l=0,r=n,cnt;
            while(l<r){
                int mid=(l+r)/2;
                if(p[mid]<=ff){
                    l=mid+1;
                }
                else{
                    r=mid;
                }
            }
            cnt=l;

            ans+=cnt;
        }
        cout<<ans<<endl;








    }


}
