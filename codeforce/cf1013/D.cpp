#include <bits/stdc++.h>
using namespace std;
#define int long long
//JAckis666
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,p;
        cin>>n>>m>>p;
        int l=1; int r=m;//左邊右邊
        int ans=p;
        while(l<=r){ //binary search
            int mid=(l+r)/2;
            int ansnow=0;
            if(mid>=m) {ansnow=m;
            }
            else{
            int mmax=(m+1)/(mid+1); //chair數量
            int x=min(mmax*mid,m-mmax+1);//放桌子
            int y=mmax+1;
            int x2=0;
            if(y<=p+1){
                x2=min(y*mid,m-y+1);
                }
                ansnow=max(x,x2);
            }
            int maybe=n*ansnow;
            if(maybe>=p){
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
            }
            cout<<ans<<endl;



        }
}
