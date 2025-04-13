#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int ans=0;
    for(int i=0;i<=m;i++){
        ans+=pow(n,i);
        if(ans>1000000000){
            cout<<"inf";
            return 0;
        }
    }
    cout<<ans;



}
