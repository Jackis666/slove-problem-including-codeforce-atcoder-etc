#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                odd++;
            }
            sum+=a[i];
        }
        if(odd==n or odd==0){
            cout<<a[n-1];
        }
        else{
            cout<<sum-odd+1;
        }
        cout<<endl;



    }

}
