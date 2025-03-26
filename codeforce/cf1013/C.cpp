#include <bits/stdc++.h>
using namespace std;
#define int long long
//JAckis666
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<((2*i)%n)+1<<" ";
            }
            cout<<"\n";
        }
    }
}
